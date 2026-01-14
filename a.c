int fun(int x) { return x; };

if(defined(fun)) {
    macro_include "stdio.h"
}
else {
    macro_include "stdlib.h"
}

#define FUN(a, b) (a + b)

puts(macro_call("FUN", "1, 2"))

int main(int argc, char** argv)
{
    puts("THE COMPILE TIME REFLECTION WORLDDDDDDDD!!!");
    
    return 0;
}
