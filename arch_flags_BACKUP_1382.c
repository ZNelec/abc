<<<<<<< HEAD
=======
#include <stdio.h>

void main()
{
    if (sizeof(void*) == 8)     // Assume 64-bit Linux if pointers are 8 bytes.
        printf("-DLIN64 ");
    else
        printf("-DLIN ");
}
>>>>>>> test
