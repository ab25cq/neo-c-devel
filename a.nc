#include <neo-c.h>

union XYZ { int a; float b; };
struct XYZ2 { int UHO; };
struct {
    union XYZ XXX;
    struct XYZ2 YYY;
} bbb;

union XXX { int a; int b; } ccc;
struct YYY { int a; int b; } ddd;

enum XX { kA, kB, kC } AAA;

typedef struct { int XXX; int YYY } sData;

int main(int argc, char** argv) 
{
    sData a;
    a.XXX = 111;
    a.YYY = 222;
    
    puts("HELLO WORLD");
    assert(1 == 1);
    return 0;
}

