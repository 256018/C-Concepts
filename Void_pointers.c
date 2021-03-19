/*
Defination
As we are already familiar, that void has no return type i.e., functions that are not returning anything 
are given the type void. So, in case of void pointers, they can be typecast into any data type whenever we 
want, meaning we do not have to decide a type for the pointer initially. In simple words, it is a general-purpose pointer variable.
Important points:
        C does not allow void pointers to be dereferenced. 
        We cannot use pointer arithmetic with void pointers. 
*/
#include<stdio.h>
int main()
{
    int a=345;
    float b=8.3;
    void *ptr;
    // pointer ptr pointing to a.
    ptr=&a;
   // printf("The value of a is %d", *(ptr));  // This line will throw an error as deferencing of void pointers is not allowed. We have to typecast it

    // Typecasting it to int to print value of a correctly.
    printf("The value of a is %d\n", *((int *)ptr));

    // Pointer ptr pointing to b
    ptr=&b;
    //Typecasting it to float to print value of b correctly.
    printf("The value of b is %f", *((float *)ptr));
    return 0;
}