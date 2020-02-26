#include <drivers/serial.h>

#define PORT 0x3f8 /* COM1 */

void init_serial() {
  port_byte_out(PORT + 1, 0x00); // Disable all interrupts
  port_byte_out(PORT + 3, 0x80); // Enable DLAB (set baud rate divisor)
  port_byte_out(PORT + 0, 0x03); // Set divisor to 3 (lo byte) 38400 baud
  port_byte_out(PORT + 1, 0x00); //                  (hi byte)
  port_byte_out(PORT + 3, 0x03); // 8 bits, no parity, one stop bit
  port_byte_out(PORT + 2,
				0xC7); // Enable FIFO, clear them, with 14-byte threshold
  port_byte_out(PORT + 4, 0x0B); // IRQs enabled, RTS/DSR set
}

int is_transmit_empty() { return port_byte_in(PORT + 5) & 0x20; }

void write_serial(char a) {
  while (is_transmit_empty() == 0)
	;

  port_byte_out(PORT, a);
}

void sprintf(char* message, ...) {
  va_list ap;
  uint64_t len = strlen(message);

  char buffer[1024];

  va_start(ap, message);

  for (uint64_t i = 0; i < len; i++) {
	if (message[i] == '%' && message[i + 1] == 's') {
	  ++i;
	  strcat(buffer, va_arg(ap, char*));
	} else if (message[i] == '%' && message[i + 1] == 'd') {
	  ++i;
	  char buf[64];
	  itoa((uint64_t)va_arg(ap, uint64_t), buf);
	  strcat(buffer, buf);

	  memset(buf, 0, 64);
	} else if (message[i] == '%' && message[i + 1] == 'x') {
	  ++i;
	  char buf[64];
	  htoa((uint64_t)va_arg(ap, uint64_t), buf);

	  strcat(buffer, buf);

	  memset(buf, 0, 64);
	} else {
	  append(buffer, message[i]);
	}
  }

  va_end(ap);

  sprint(buffer);
  memset(buffer, 0, 1024);
}

void sprint(char* message) {
  int i = 0;
  while (message[i] != 0) {
	write_serial(message[i++]);
  }
}

void sprint_int(int64_t num) {
  char toprint[63];
  itoa(num, toprint);
  sprint(toprint);
}

void sprint_uint(uint64_t num) {
  char toprint[63];
  itoa(num, toprint);
  sprint(toprint);
}

void sprintd(char* message) {
  sprint("[");
  sprint_uint(tick);
  sprint(" ticks] [flame:debug]: ");
  sprint(message);
  sprint("\n");
}