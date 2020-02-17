/*
                                string.c
                                Copyright Shreyas Lad (PenetratingShot) 2019
                                Licensed under the MIT License

                                Handy string manipulation and conversion
   functions
*/

#include <string.h>

#include <stdint.h>

void itoa(int n, char str[]) {
  int i, sign;
  if ((sign = n) < 0)
    n = -n;
  i = 0;
  do {
    str[i++] = n % 10 + '0';
  } while ((n /= 10) > 0);

  if (sign < 0)
    str[i++] = '-';
  str[i] = '\0';

  reverse(str);
}

void itoa_uint8(uint8_t num, char* str) {
  uint8_t i = 0;
  do {
    str[i++] = num % 10 + '0';
  } while ((num /= 10) > 0);

  str[i] = '\0';

  reverse(str);
}

void hex_to_ascii(int64_t n, char* str) {
  append(str, '0');
  append(str, 'x');
  char zeros = 0;

  int64_t tmp;
  int i;
  for (i = 28; i > 0; i -= 4) {
    tmp = (n >> i) & 0xF;
    if (tmp == 0 && zeros == 0)
      continue;
    zeros = 1;
    if (tmp > 0xA)
      append(str, tmp - 0xA + 'a');
    else
      append(str, tmp + '0');
  }

  tmp = n & 0xF;
  if (tmp >= 0xA)
    append(str, tmp - 0xA + 'a');
  else
    append(str, tmp + '0');
}

void reverse(char* s) {
  int c, i, j;
  for (i = 0, j = strlen(s) - 1; i < j; i++, j--) {
    c = s[i];
    s[i] = s[j];
    s[j] = c;
  }
}

uint64_t strlen(char* s) {
  uint64_t i = 0;
  while (s[i] != '\0')
    ++i;
  return i;
}

void append(char* s, char n) {
  int len = strlen(s);
  s[len] = n;
  s[len + 1] = '\0';
}

char* strcat(char* dest, char* src) {
  char* ptr = dest + strlen(dest);

  while (*src != '\0') {
    *ptr++ = *src++;
  }

  *ptr = '\0';

  return dest;
}

char* strcpy(char* dest, char* src) {
  char* saved = dest;
  while (*src) {
    *dest++ = *src++;
  }

  *dest = 0;
  return saved;
}

void backspace(char* s) {
  int len = strlen(s);
  s[len - 1] = '\0';
}

uint64_t strcmp(char* s1, char* s2) {
  uint64_t i;

  for (i = 0; s1[i] == s2[i]; i++) {
    if (s1[i] == '\0')
      return 0;
  }

  return s1[i] - s2[i];
}

// Compare the first x number of characters between the two strings. Can be used
// for handling arguments
uint64_t strcmpl(char* s1, char* s2, uint8_t x) {
  uint64_t i = 0;

  do {
    if (s1[i] == s2[i]) {
      return true;
    } else {
      return false;
    }

    i++;
  } while (i < x);

  return false;
}

// lvlibc strtok
char* strtok(char* str, const char* delimiter) {
  static char* buffer;

  if (str != NULL) {
    buffer = str;
  }

  if (buffer[0] == '\0') {
    return NULL;
  }

  char* ret = buffer;

  for (char* b = buffer; *b != '\0'; b++) {
    for (const char* d = delimiter; *d != '\0'; d++) {
      if (*b == *d) {
        *b = '\0';
        buffer = b + 1;

        // Skip the beginning delimiters
        if (b == ret) {
          ret++;
          continue;
        }

        return ret;
      }
    }
  }

  return ret;
}

char removeNull(char* s) {
  char ret = s[0];
  return ret;
}

void remove(char* s, uint32_t pos) {
  int len = strlen(s);
  char prev = removeNull("\0");
  char tempE;
  for (uint32_t x = len; x > pos - 2; x--) {
    tempE = s[x];
    s[x] = prev;
    prev = tempE;
  }
  s[len - 1] = '\0';
}