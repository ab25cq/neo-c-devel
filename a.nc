//#include <neo-c.h>

//union { int a; float b; } aaa;
struct {
    union { int a; double x; };
    struct { int b; double c };
} bbb;

//union XXX { int a; int b; } ccc;
//struct YYY { int a; int b; } ddd;

int main(int argc, char** argv) 
{
    return 0;
}

