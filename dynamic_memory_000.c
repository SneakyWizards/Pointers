/*
 * @Author: chankruze (Chandan Kumar Mandal) 
 * @Date: 2019-05-17 05:34:53 
 * @Last Modified by: chankruze (Chandan Kumar Mandal)
 * @Last Modified time: 2019-05-17 06:28:45
 */
#include <stdio.h>
#include <stdlib.h>

/**
 * Dynamic Memmory Allocation in C
 * 
 * Allocate block of memory
 * - malloc - void* malloc(size_t size) (unsigned int)
 * - calloc - 
 * - realloc
 * 
 * Deallocate block of memory
 * - free
*/

int main()
{
    // void *p = malloc(size); ** 1 **
    int n = 3; // ** 2 **
    // void *p = malloc(n*sizeof(int)); ** 3 **
    // *p = 2;

    /**
     * ** 1 **
     * Where size is an unsigned integer i.e. malloc(4) instead of malloc(sizeof(int)).
     * This is correct but in practice we will calculate the size.
     * 
     * ** 2 **
     * number of units we need memory for i.e for 1 integer `sizeof(int)` is fine and for 10 integers, we will write `10*sizeof(int)`.
     * 
     * ** 3 **
     * Incorrect (we can't dereference a void pointer like done below).
     * To use this void pointer we should do type casting to the datatype we will operate it with, in this example it's int.
    */

    // Below is a valid malloc call example.
    int *p = (int *)malloc(n * sizeof(int));
    printf("\n[I] Memory reserved from : %lu\n\n", p);
    *p = 2;       // p[0]
    *(p + 1) = 4; // p[1]
    *(p + 2) = 6; // p[2]

    for (int i = 0; i <= sizeof(p) / n; i++)
    {
        printf("[I] Array element at index %d\n", i);
        printf("------------------------------\n");
        printf("    Value   : %d\n", p[i]);
        printf("    Address : %lu\n", &p[i]);
        printf("\n");
    }
    free(p);
}