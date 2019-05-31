/*
 * @Author: chankruze (Chandan Kumar Mandal) 
 * @Date: 2019-05-17 05:34:48 
 * @Last Modified by: chankruze (Chandan Kumar Mandal)
 * @Last Modified time: 2019-05-17 05:37:45
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;  // stored in stack
    int *p; // integer pointer
    p = new int;

    *p = 10;
    delete (p);

    p = new int;
    *p = 20;
    free(p);
    /**
     * To store an integer array of 20 elements,
     * we need to call malloc asking one block of memory = (20*size of one elem)
    */
    p = new int[20];
    delete[] p;
}