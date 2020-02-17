#include <drivers/screen.h>

cursorpos_t cursorpos = {0, 0};

/**********************************************************
 * Public Kernel API functions                            *
 **********************************************************/

void kprint(char* message) { UNUSED(message); }

void printf(char* message, ...) {
  va_list ap;
  int len = strlen(message);

  char* buffer = (char*)malloc(sizeof(char));

  va_start(ap, message);

  for (int i = 0; i < len; i++) {
    if (message[i] == '%' && message[i + 1] == 's') {
      ++i;
      strcat(buffer, va_arg(ap, char*));
    } else if (message[i] == '%' && message[i + 1] == 'd') {
      ++i;
      char* buf = malloc(sizeof(char));
      itoa((int)va_arg(ap, int), buf);
      strcat(buffer, buf);

      buf[0] = '\0';
      free(buf);
    } else {
      append(buffer, message[i]);
    }
  }

  va_end(ap);

  // kprint(buffer);
  free(buffer);
}

void clear(color_t color) {
  for (uint64_t x = 0; x < MAX_COLS; x++) {
    for (uint64_t y = 0; y < MAX_ROWS; y++) {
      setPixel(x, y, createColor(color));
    }
  }
}

void kprint_int(uint64_t num) {
  char buf[65];
  itoa(num, buf);
  kprint(buf);
}

void kprint_uint8(uint8_t num) {
  char buf[33];
  itoa_uint8(num, buf);
  kprint(buf);
}

/**********************************************************
 * Private kernel functions                               *
 **********************************************************/

void shiftCursorPos(int bruh, int bruh2) {
  UNUSED(bruh);
  UNUSED(bruh2);
}

void kprint_backspace() { ; }