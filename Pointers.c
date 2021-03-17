#include<stdio.h>
int main()
{
    printf("Let's Learn about pointers\n");
    int a=76;
    int* ptra=&a;
    //Printing value of a by simple method
    printf("The value of a is %d\n",a);
    //Printing value of a by dereferencing or by using * operator
    printf("The value of a is %d\n",*ptra);
    //Printing address of a
    printf("The address of a is %x\n",&a);
    //Printing address of a by using pointer
    printf("The address of a is %x\n",ptra);
    //Printing address of pointer itself
    printf("The address of pointer to a is %x\n",&ptra);
    printf("\n Concept of NULL Pointer\n");
    int *nullptr=NULL;
    printf("The value of adrress stored by null pointer is %x\n",nullptr);

    // Pointer Arithmetic And usage in arrays
    printf("\n Pointer Arithmetic And usage in arrays \n");
    int b=50;
    int *ptrb=&b;
    // Printing address stored in pointer 
    printf("The value of address stored in pointer is %d\n",ptrb);
    ptrb++;
    printf("The value of address stored in pointer is %d\n",ptrb);
    // What we are doing is that we are not adding 6 but we are adding 6*(sizeofint())
    // sizeofint() depends on architecture
    ptrb=ptrb+6;
    printf("The value of address stored in pointer is %d\n",ptrb);

    // Defining Array
    int arr[] ={1,2,3,4,5,6,7,8};
    
    // Printing Address
    printf("\nThe address of first element of array is %d\n",&arr[0]);
    printf("The address of second element of array is %d\n",&arr[1]);

    // Printing address by using pointer Arithmetic
    printf("\nThe address of first element of array is %d\n",arr);
    printf("The address of second element of array is %d\n",arr+1);
    printf("The address of third element of array is %d\n",arr+2);

    // Printing value
    printf("\nThe value at index 0 is %d\n",arr[0]);

    // Printing values of array elements using pointer Arithmetic
    printf("\nThe value of first element of array is %d\n",*arr);
    printf("The value of second element of array is %d\n",*(arr+1));

    //Printing elements of array
    for(int i=0;i<8;i++)
    {
        printf("%d\n",*(arr+i));
    }
    //arr--; It will throw an error as arr is a constant
    // However we can resolve it in following way
    int* arrayptr=arr;
    // Printing array elements using an another pointer which is pointing to base address of array arr
    for(int i=0;i<8;i++)
    {
        printf("%d\n",*(arrayptr+i));
    }
    return 0;
}