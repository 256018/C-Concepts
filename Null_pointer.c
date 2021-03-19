/* A NULL pointer is a pointer that does not point to any memory location. It generally points to NULL or 0th memory location, 
so in simple words, no memory is allocated to a NULL pointer.

Dereference:
    Here again, we will see the concept of dereferencing as its behavior, in this case, is the same as a void pointer. 
    We can say that the type of a NULL pointer is void. So we have to typecast it into any variable the same as in the void pointer case.
*/

#include<stdio.h>
int main()
{
    int a = 34;
    int * ptr = NULL;
    if (ptr != NULL)
    {
        printf("The address of a is %d\n", ptr);
    }
    else
    {
        printf("The pointer is a null pointer and cannot be dereferenced");
    }
    return 0;
}