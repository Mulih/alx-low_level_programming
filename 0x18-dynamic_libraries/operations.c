// operations.c
#include "operations.h"

int add(int a, int b) { return a + b; }
int sub(int a, int b) { return a - b; }
int mul(int a, int b) { return a * b; }
int div(int a, int b) { return b != 0 ? a / b : 0; }
int mod(int a, int b) { return b != 0 ? a % b : 0; }
