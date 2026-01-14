#include <neo-c.h>

int main(int argc, char** argv)
{
    int total_tests = 0;
    int failed_tests = 0;
    if(_Alignof(int) <= _Alignof(max_align_t))  {
        do {     failed_tests++;     printf("FAIL: %s:%d in %s() -> " "ASSERT_TRUE(%s) failed" "\n", "a.c", 342, __func__,"_Alignof(int) <= _Alignof(max_align_t)"); } while(0); 
    }
//    do {     do { total_tests++; } while(0);     if(!(_Alignof(int) <= _Alignof(max_align_t))) do {     failed_tests++;     printf("FAIL: %s:%d in %s() -> " "ASSERT_TRUE(%s) failed" "\n", "a.c", 342, __func__,"_Alignof(int) <= _Alignof(max_align_t)"); } while(0); } while(0);
    
    return 0;
}
