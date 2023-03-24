/*
Pointer:-Pointer is a variable which stores address of another 
variable. It can be of different data types:-int,char,array,function 
or any other Pointer. Size depends upon architechture.In C Pointer 
can be declared using *
Example:-
int variable --> variable=7 --> 7 is stored in A1 address
int *pointer=&variable; //address of 'variable' is stored in pointer 
variable '*pointer' 
//pointer points to variable means pointer is storing address of that 
//variable
*/

/*
'&' and '*' operators in C:-
'&' address of operator: it returns address of a variable.
Ex: int variable=7;
    &variable means address of variable 
    p=&variable; means we're storing address of 'variable' in pointer 'p'
'*' dereference or indirection operator: it returns the value at a given 
address.
Ex: if we want to get the value of variable then we've to do *p
    here,
    *p=7 as value of the variable is 7
*/
#include<stdio.h>
int main()
{
    int a;
    //it'll print garbage value as we've not given any value in 'a' 
    //variable
    printf("The value of a is:%d\n",a); 
    return 0;
}
//=======================================================================//
#include<stdio.h>
int main()
{
    int a=5;
    //integer pointer will point to an integer variable
    int *p=&a; //'p' pointer will store address of a
    printf("The value of a is:%d\n",*p); //output:5
    return 0;
}
//=======================================================================//
#include <stdio.h>
int main()
{
    int a=5;
    //integer pointer will point to an integer variable
    int *p=&a; //'p' pointer will store address of a
    printf("The address of a is:%d\n",p); //output:The address of a
    return 0;
}
//=======================================================================//
#include <stdio.h>
int main()
{
    int a=5;
    //integer pointer will point to an integer variable
    int *p=&a; //'p' pointer will store address of a
    printf("The address of pointer 'p' is:%p\n",&p); 
    //output:The address of pointer 'p'
    return 0;
}
//=======================================================================//
#include <stdio.h>
int main()
{
    int a=5;
    //integer pointer will point to an integer variable
    int *p=&a; //'p' pointer will store address of a
    printf("The address of 'a' is:%p\n",&a); 
    //output:The address of variable 'a'
    return 0;
}
//=======================================================================//
#include <stdio.h>
int main()
{
    int a=5;
    //integer pointer will point to an integer variable
    int *p=&a; //'p' pointer will store address of a
    printf("The value of a is:%d\n",*p); 
    //output:The value of a is 5
    return 0;
}
//=======================================================================//
/*
4 types of Pointers:-
1) Null pointer
2) Void pointer
3) Dangling pointer
4) Wild pointer
*/
//=======================================================================//
/*
Null Pointer:- A pointer that is not assigned any value but NULL is known 
as Null Pointer.In programming, it doesn't point to any object or 
function.We can use it to initialize a pointer variable when that pointer 
variable isn't assigned any valid memory address yet.
Declaration of Null Pointer:-
int *p=NULL;
*/
#include <stdio.h>
int main()
{
    int *p1=NULL; //'p1' pointer is NULL pointer
    printf("The address of some garbage is:%p\n",p1); 
    //output:The address of some garbage
    return 0;
}
//=======================================================================//
/*
Uses of Pointers:-
1) Dynamic memory location
2) Arrays, Functions, Structures
3) Return multiple values from a function
4) Pointer reduces the code and improves the performance
*/
