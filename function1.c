/*
Function or method components:-
*/
#include<stdio.h>
//syntax of function declaration or prototype declaration
//<return type><function name>(arguments with their datatype);
int square(int a); //function declaration or prototype declaration
int main()
{
	int x,sqr;
	printf("Enter number to calculate square:");
	scanf("%d",&x);
	//syntax of function call
	//<any variable>=<function name>(on which variable function have to perform);
	sqr=square(x); //function call
	printf("Square is=%d",sqr);
	return 0;
}
//syntax of function definition
//<return type><function name>(arguments with their datatype)
int square(int a) //function definition
{
	int s;
	s=a*a;
	return s; //return statement
}
