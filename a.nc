//#include <neo-c.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
    return 0;
}

