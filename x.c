#include <stdio.h>

#define ElfW(type)	_ElfW (Elf, __ELF_NATIVE_CLASS, type)
#define _ElfW(e,w,t)	_ElfW_1 (e, w, _##t)
#define _ElfW_1(e,w,t)	e##w##t

#define __ELF_NATIVE_CLASS __WORDSIZE

ElfW(Addr) r_brk;

int main(int argc, char ** argv)
{
    
    return 0;
}
