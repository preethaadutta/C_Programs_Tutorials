/*Constants in C*/
/*
Constants: Constants is a value or variable that can't be changed throughout
the program.
Ex: 15,'a',"preethaadutta"
In C there're two ways to define constant:-
1) const keyword
2) #define preprocessor
*/
#include<stdio.h>
int main()
{
	int a=45; //declaring and assigning value to a variable
	a=15; //changing value of the variable
	printf("%d\n",a);
	return 0;
}
//as we've assigned a value in a variable and then changing or updating
//the value to that variable so in this case it'll not give error
//=======================================================================//
//defining constant using const keyword
#include<stdio.h>
int main()
{
	const int a=45; //defining constant integer variable a
	printf("%d\n",a); //output:45
	return 0;
}
//=======================================================================//
//defining constant using const keyword and trying to change value of 
//constant variable
#include<stdio.h>
int main()
{
	const int a=45; //defining constant integer variable a
	a=15; //trying to change value of constant variable
	//which can't be possible so it'll give error
	printf("%d\n",a);
	return 0;
}
//it'll give error as changing value of constant variable is not possible
//=======================================================================//
//defining constant using #define preprocessor
#include<stdio.h>
#define PI 3.14 //defining constant variable PI 
int main()
{
	int a=15;
	printf("%f\n",PI); //output: 3.140000
	return 0;
}
//=======================================================================//
//defining constant using #define preprocessor and trying to change value 
//of constant variable
#include<stdio.h>
#define PI 3.14 //defining constant variable PI 
int main()
{
	int a=15;
	PI=4.55;
	printf("%f\n",PI); 
	return 0;
}
//it'll give error as changing value of constant variable is not possible
//=======================================================================//
#include<stdio.h>
int main()
{
	const volatile int i=10; 
	printf("%d %d %d\n",++i,++i,++i);
	return 0;
}
//output: it'll give error
//because i is a const variable so we can't change the value of i
//=======================================================================//

