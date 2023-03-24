/*Typecasting:-Converting datatype of any variable from one datatype to 
another datatype.*/
#include <stdio.h>
int main()
{
    float a=4.5;
    //changing datatype of a variable from float to int
//Syntax of Typecasting: (datatype in which we want to convert)variable
    printf("The value of a is:%d\n",(int)a); 
    return 0;
}
//output:4

/*Type Conversion:-
Arithmetic expression between | output will come-
int int                       | int
int float                     | float
float float                   | float

1) Implicit Type Conversion or Automatic Type Conversion:-it is done by 
compiler automatically when in an expression more than one datatype is 
present.In such cases type conversion takes place automatically by compiler 
to avoid loss of data.

Implicit Type Conversion or Automatic Type Conversion happens top to bottom
bool            
char            
short int       
int             
unsigned int    
long            
unsigned        
long long       
float           
double          
long double     

2) Explicit Type Conversion or type-casting:- it is done by user means user 
can convert datatype of any variable from one datatype to another datatype.

*/
//1) Implicit Type Conversion or Automatic Type Conversion:-
#include <stdio.h>
int main()
{
    int a;
    int x=3;
    char c='a'; //ASCII value of 'a'=97
//int=int+char//here char c is implicitly converted to it's ASCII value(int)
    a=x+c; //a=3+97
    printf("%d",a); //output:100
    return 0;
}
//========================================================================//
#include <stdio.h>
int main()
{
    float a;
    int x=5;
//float=int+float//here int x is implicitly converted to float
    a=x+1.2; //a=5+1.2
    printf("%f",a); //output:6.200000
    return 0;
}
//========================================================================//
#include <stdio.h>
int main()
{
    //here char c is implicitly converted to int
    char c=10; //integer value is stored in char datatype
    c=c+20; //c=10+20
    printf("%d",c); //output:30
    return 0;
}
//========================================================================//
//2) Explicit Type Conversion or type-casting:-
#include <stdio.h>
int main()
{
    float a=4.5;
    //changing datatype of a variable from float to int
//Syntax of Typecasting: (datatype in which we want to convert)variable
    printf("The value of a is:%d\n",(int)a); 
    return 0;
}
//output:4
//========================================================================//

