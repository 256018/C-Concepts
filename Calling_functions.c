#include<stdio.h>
void swapbyreference(int* x,int* y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
    return;
}
void swapbyvalue(int p,int q)
{
    int temp;
    temp=p;
    p=q;
    q=temp;
    return;
}
int func1(int array[])
{
    int s=0;
    for(int i=0;i<5;i++)
    {
        s=s+array[i];
    }
    return s;
}
int func2(int* arrptr)
{
    int s=0;
    for(int i=0;i<5;i++)
    {
        s=s+ *(arrptr+i);
    }
    return s;
}
int main()
{
    // Call By reference example
    int a=34,b=74;
    printf("Value of a is %d and b is %d\n",a,b);
    swapbyreference(&a,&b);
    printf("Value of a and b after swapping\n");
    printf("Value of a is %d and b is %d\n",a,b);

    // Call by value
    int i=10,j=5;
    printf("Value of i is %d and j is %d\n",i,j);
    swapbyvalue(i,j);
    printf("Value of i and j after swapping\n");
    printf("Value of i is %d and j is %d\n",i,j);

    // Passing Arrays As Function Arguments by two methods
    // Changes made in function are also reflected in main function in both methods.
    int arr[]={1,2,3,4,5};
    // Method 1
    // By declaring array as parameter in function
    int sum1=func1(arr);

    // Method 
    // By passing array base address as parameter in function
    int sum2=func2(arr); 

    printf("The value of sum1 and sum2 is %d %d\n",sum1,sum2);   
    return 0;
}