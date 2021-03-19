/* 
 Just like Structures, the union is a user-defined data type.  All the members in union share the same memory location. 
 The union is a data type that allows different data belong to different data types to be stored in the same memory locations.
 One of the advantages of using a union is that it provides an efficient way of reusing the memory location, 
 as only one of its members can be accessed at a time. A union is used in the same way we declare and use a structure.
*/
#include <stdio.h>
#include <string.h>
union Student
{
    int id;
    int marks;
    char fav_char;
    char name[34];
};
int main()
{
    union Student s1;
    strcpy(s1.name, "Harry");
    s1.fav_char = 'u';
    s1.marks = 45;
    s1.id = 1;  // It remains intact as we are using unions so only one memebrs remain active at a time;

    printf("The id is %d \n", s1.id);
    printf("The marks is %d \n", s1.marks);
    printf("The fav_char is %c \n", s1.fav_char);
    printf("The name is %s \n", s1.name);
    

    
    return 0;
}