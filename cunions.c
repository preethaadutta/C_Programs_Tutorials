/*Unions in C*/
/*
Union is a user defined data type(very similar to structure). The 
difference between Structures & Unions lies in the fact that in structure,
each member has its own storage location, whereas members of a union uses
a single shared memory location. This single shared memory location is 
equal to the size of its largest data member.
//in structure storage location example:-
struct ActiveEmployee
{
char programmar[5]; //for this 5 bytes needed
char sweeper[5]; //for this another 5 bytes needed
}
//but if we want to use any of data members (programmar or sweeper then) 
it is not needed to waste 5+5=10 bytes after creating structure. In that 
case we can create union in which seperate bytes will not be needed we can 
store (programmar & sweeper) data members in the same memory location.
Ex:
union ActiveEmployee
{
char programmar[5]; //for this 5 bytes needed
char sweeper[5]; 
}
//for programmar & sweeper data member total 5 bytes needed
*/
/*
Declaring and Accessing Union data members:-
Like structures, we access any member by using the member access 
operator(.) in unions.We use keyword union to define a union.
*/
/*
Structure can handle all data members at once.
Ex:
struct student
{
char name[5]; //for this 5 bytes needed
int id; //for this another 4 bytes needed
}s1;
//total 5+4=9 bytes needed
Union cannot handle all data members at once.
Ex:
union student
{
char name[5]; //for this 5 bytes needed
int id; //int size is 4 bytes which is less than 5 bytes
}u;
//total 5 bytes needed as 4 bytes is less than 5 bytes
*/
/*
Syntax of Unions similar to structure:-
union test
{
char c; 
int i; 
}u;
u.c; //accessing data members of union u
u.i;
*/
/*
Unions is better for memory management
*/
#include <stdio.h>
#include<string.h>
struct Student 
{
      int id;
      int marks;
      char name[20];
      char section;
};
int main()
{
    struct Student s1;
    s1.id=1;
    s1.marks=45;
    strcpy(s1.name,"Preethaa");
    s1.section='e';
    printf("ID is %d\n",s1.id);
    printf("Marks is %d\n",s1.marks);
    printf("Name is %s\n",s1.name);
    printf("Section is %c\n",s1.section);
    return 0;
} 
//output: ID is 1
//        Marks is 45
//        Name is Preethaa
//        Section is e
//=======================================================================//
#include <stdio.h>
#include<string.h>
union Student 
{
      int id;
      int marks;
      char name[20];
      char section;
};
int main()
{
    union Student s1;
    s1.id=1;
    s1.marks=45;
    s1.section='e';
    strcpy(s1.name,"Preethaa"); //union is taking this data member's size 
    printf("ID is %d\n",s1.id);
    printf("Marks is %d\n",s1.marks);
    printf("Name is %s\n",s1.name);
    printf("Section is %c\n",s1.section);
    return 0;
} 
//output: ID is 1701147216
//        Marks is 1701147216
//        Name is Preethaa
//        Section is P
//=======================================================================//

