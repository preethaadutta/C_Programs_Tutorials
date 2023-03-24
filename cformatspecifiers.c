/*Format specifiers in C*/
/*
Format Specifier: Format Specifier is a way to tell the compiler what type
of data is stored in a variable during taking input or displaying output 
to the user.
*/

//Signed Integer Format Specifier: %d,%i
#include<stdio.h>
int main()
{
	int x = 45;
	printf("%d\n",x); //output:45
	printf("%i\n",x); //output:45
	return 0;
}
//======================================================================//
//Unsigned Integer Format Specifier: %u
#include <stdio.h>
int main()
{
	//The -10 value is converted into it's positive
	//equivalent by %u
	printf("%u\n",-10); //output:4294967286
	printf("%u\n",10);  //output:10
	return 0;
}
//======================================================================//
//Floating-point format specifier: %f, %e or %E
#include <stdio.h>
int main()
{
	float a=12.67;
	float b=2.45;
	printf("%f\n",a); //output:12.670000
	printf("%e\n",a); //output:1.267000e+01
	printf("%E\n",a); //output:1.267000E+01
	printf("%f\n",b); //output:2.450000
	printf("%e\n",b); //output:2.450000e+00
	printf("%E\n",b); //output:2.450000E+00
	return 0;
}
//======================================================================//
//More details about Floating-point format specifier: %f
//printf("%a.bf",variable) will print variable with 'b' decimal points in
//'a' character space
#include <stdio.h>
int main()
{
	float a=7.333;
   //printf("%.bf\n",variable); //output:variable with b decimal points	
	printf("Value of b is:%.4f\n",a);    //output:7.3330
	printf("Value of b is:%0.4f\n",a);   //output:7.3330
//printf("%a.bf\n",variable); 
//output:total number of characters will be 'a' with characters of 
//variables and spaces and variable will print till b decimal points
         printf("Value of b is:%6.4f\n",a);  //output:7.3330
	printf("Value of b is:%7.4f\n",a);  //output: 7.3330	
	printf("Value of b is:%15.4f\n",a); //output:         7.3330
//printf("%-a.bf\n",variable);
//output:total number of characters will be 'a' with characters of 
//variables and spaces and it'll leave spaces after printing the variable 
//and variable will print till b decimal points
         printf("Value of b is:%-7.4f\n",a);  //output:7.3330 	
         printf("Value of b is:%-7.4f preethaa",a);//output:7.3330 preethaa
	return 0;
}
//======================================================================//
//Character format specifier: %c
#include <stdio.h>
int main()
{
	char ch='A';
	printf("%c\n",ch); //output:A
	return 0;
}
//======================================================================//
//String printing: %s
#include <stdio.h>
int main()
{
	char a[]="preethaadutta";
	printf("%s\n",a); //output: preethaadutta
	return 0;
}
//======================================================================//
//Hexadecimal format printing: %x
#include <stdio.h>
int main()
{
    int a=5;
    printf("The value of 'a' is:%x\n",a); //output:hexadecimal format of 5
    return 0;
}
//======================================================================//
//address or pointer printing: %p
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
//======================================================================//

