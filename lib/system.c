#include "../kernel/kernel.h"
#include <system.h>

// Call kernel to input external command
void system(char* string) { user_input(string); }
