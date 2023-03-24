/*
WAP to swap two numbers using third variable in function block 
using Call by Reference approach:-
*/
#include<stdio.h>
#include<conio.h>
void swap(int *x, int *y)
{
	int z=*x;
	*x=*y;
	*y=z;
	printf(" After swap a=%d and b=%d\n",*x,*y);
}
int main()
{
	int a=10, b=20;
	printf("Before swap a=%d and b=%d\n",a,b);
	swap(&a,&b);
	//printf(" After swap a=%d and b=%d\n",a,b);	
	return 0;
}
//====================================================================//
/*
WAP to swap two numbers without using third variable in function block 
using Call by Reference approach:-
*/
#include<stdio.h>
#include<conio.h>
void swap(int *x, int *y)
{
	*x=*x+*y;
	*y=*x-*y;
	*x=*x-*y;
	printf(" After swap a=%d and b=%d\n",*x,*y);
}
int main()
{
	int a=10, b=20;
	printf("Before swap a=%d and b=%d\n",a,b);
	swap(&a,&b);
	//printf(" After swap a=%d and b=%d\n",a,b);	
	return 0;
}
//====================================================================//

