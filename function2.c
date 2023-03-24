//4) user defined function with arguments and a return value:-
#include<stdio.h>
//syntax of function declaration or prototype declaration
//<return type><function name>(arguments with their datatype);
int findmax(int a,int b); //function declaration or prototype declaration //a=formal parameter
int main()
{
	int x,y,result;
	printf("Enter 1st number:");
	scanf("%d",&x);
	printf("Enter 2nd number:");
	scanf("%d",&y);
	result=findmax(x,y); //function call 
	printf("Maximum number is:%d",result);
	return 0;
}
//syntax of function definition
//<return type><function name>(arguments with their datatype)
int findmax(int a,int b) //function definition
{
	if(a>b)
	{
		return a;
	}
	else
	{
		return b;
	}
}
