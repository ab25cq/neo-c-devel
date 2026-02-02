//#include <neo-c.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#undef va_start
#define va_start(ap, last)  __builtin_va_start(ap, last)
#include <limits.h>
#include <locale.h>
#include <errno.h>
#include <assert.h>
#include <stdbool.h>

union XYZ { int a; float b; };
struct XYZ2 { int UHO; };
struct {
    union XYZ XXX;
    struct XYZ2 YYY;
} bbb;

union XXX { int a; int b; } ccc;
struct YYY { int a; int b; } ddd;

enum XX { kA, kB, kC } AAA;

int main(int argc, char** argv) 
{
    puts("HELLO WORLD");
    assert(1 == 1);
    return 0;
}

