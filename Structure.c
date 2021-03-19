/* Structure are user defined data type in C. Structure allows us to combine different data types together.
    (.) dot operator is called as structure member operator.
*/
#include<stdio.h>
struct Student
{
    int id;
    float marks;
};

typedef struct Employee
{
    int id;
    char name[34];
    float rating;
    char fav_char;
}emp; // struct Employee has been given a alias name emp.

int main()
{
    struct Student s1;
    // First way to initialize
    s1.id=12;
    s1.marks=20.65;
    // Second way to initialize
    // struct Student s1={12,20.65};


    // Typedef
    /*  A typedef is a keyword that is used to assign alternative names to existing datatypes. 
        We use typedef with user defined datatypes, when names of the datatypes become slightly complicated to use in programs. 
        Typedefs can be used to:
             Provide the clarity in the code.
            it makes easier to change the underlying data types that you use.
            Typedefs makes the code more clear and easier to modify. 

        Syntax:
            typedef <previous_name> <alias_name>
    */
   typedef unsigned long ul; // New name given to unsigned long;
   ul p,q;
   typedef int integer;
   integer x=10;
   printf("The value of x is %d\n",x);

   //  Usage of typedef in struct;
   emp e1,e2;
   e1.id=10;
   e2.id=11;
   e1.rating=50.5;
   e2.rating=60.45;
   printf("The id of e1 is %d\n",e1.id);
   printf("The id of e2 is %d\n",e2.id);

   // Usage of typedef in declaring pointer
    //int* a,b;
    int c=90;
    //a=&c;
    //b=&c; // It will throw an error because it will treat only a aspointer and b as int only. To solve this we can use typedef.
    typedef int* intPointer;
    intPointer a,b;
    a=&c;
    b=&c;
}
