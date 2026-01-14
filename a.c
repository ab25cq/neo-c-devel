int fun(int x) { return x; };

if(defined(fun)) {
    macro_include "stdio.h"
    macro_include "stdlib.h"
    macro_include "string.h"
    macro_include "stdarg.h"
    macro_include <stdarg.h>
    macro_include <limits.h>
    macro_include <locale.h>
    macro_include <errno.h>
    macro_include <assert.h>
    macro_include <stdbool.h>
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
