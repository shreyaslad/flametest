void enableCursor() {
  /* Set cursor scanline begin to 0 and make cursor visible */
  port_byte_out(0x3D4, 0x0A);
  port_byte_out(0x3D5, port_byte_in(0x3D5) & 0xC0);

  /* Set cursor scanline end to 15 */
  port_byte_out(0x3D4, 0x0B);
  port_byte_out(0x3D5, (port_byte_in(0x3D5) & 0xE0) | 15);
}

void disableCursor() {
  port_byte_out(0x3D4, 0x0A);
  port_byte_out(0x3D5, 0x20);
}