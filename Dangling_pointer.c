/* Dangling pointers are pointers that are pointing to a memory location that has been freed or deleted.
Dangling pointers arise during object destruction, when an object with an incoming reference is deleted 
or deallocated, without modifying the value of the pointer, so that the pointer still points to the memory 
location of the deallocated memory.The system may reallocate the previously deleted memory; 
the unpredicted result may occur as the memory may now contain different data.
*/

#include<stdio.h>
#include<stdlib.h>
int *myfunc()
{
    // a is a local variable and goes out of scope after function call
    int a=34;
    return &a;
}
int main()
{
    //De-allocating or free variable memory (Method 1)
    int *ptrr=(int *)malloc(sizeof(int)); 
    int x=80; 
    ptrr=&x; 
    free(ptrr); // Pointer ptrr now becomes dangling.

    // Returning local variable in function call (Method 2)
    int *ptr=myfunc(); // Pointing to invalid location i.e. it becomes dangling pointer.

    // Variable out of scope (Method 3)
    int *potr;
    {
        int i=0;
        potr=&i;
    }
    printf("%d",*potr); // Pinter potr becomes adangling pointer
    // We can avoid dangling probem by pointing point to NULL. 
    return 0; 
}