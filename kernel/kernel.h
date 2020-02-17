#pragma once

#include <math.h>
#include <stddef.h>
#include <stdint.h>
#include <string.h>

#include "../cpu/isr.h"
#include "../cpu/ports.h"
#include "../cpu/timer.h"
#include "../cpu/type.h"
#include <boot/multiboot.h>
#include <drivers/colors.h>
#include <drivers/keyboard.h>
#include <drivers/screen.h>
#include <drivers/serial.h>
#include <drivers/sound.h>
#include <drivers/time.h>
#include <drivers/vesa.h>
#include <fs/hdd.h>
#include <fs/hddw.h>
#include <mm/mm.h>

void user_input(char* input);