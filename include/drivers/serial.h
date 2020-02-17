#ifndef SERIAL_H
#define SERIAL_H

#include <stdint.h>
#include <stdarg.h>
#include <string.h>
#include <mm/pmm.h>
#include "../../cpu/ports.h"
#include "../../cpu/timer.h"

void init_serial();
void write_serial(char a);
void sprint(char *message);
void sprintd(char *message);
void sprint_uint(uint64_t num);
void sprint_int(int64_t num);

void sprintf(char* message, ...);

#endif