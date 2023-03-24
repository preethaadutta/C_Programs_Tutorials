/*Pointers in C mam's code*/
/*
Format Specifier for printing address:-
1) if we use %d or %i(Signed Integer format specifier) to print address of 
 any variable then -ve address location will be printed
2) if we use %x(Hexadecimal format specifier) to print address of any 
 variable then address location will be printed in Hexadecimal format
3) if we use %p(Address or Pointer format Specifier) to print address of 
 any variable then address location will be printed in awkward format that 
 we can't understand
4) if we use %u(Unsigned Integer format specifier) to print address of 
 any variable because then only we can understand the exact address 
 location of memory 
*/
#include<stdio.h>
main()
{
	int a = 5;
	printf ("value of a = %d\n",a);
	printf ("address of a = %u\n",&a); 
	//%u is format specifier for obtaining address
}
//Output:
//       Value of a = 5
//       Address of a = 2000
//=======================================================================//
#include<stdio.h>
main()
{
	int a = 5;
	printf ("value of a = %d",a);
	printf ("address of a = %u",&a);
	printf ("value at memory address %u is %d",&a,*(&a));
	//*(&a)=value of a=5 (means the value at address of variable a)
}
//Output:
//       Value of a = 5
//       Address of a = 2000 
//       Value at address = 2000 = 5
//=======================================================================//
/*
#include<stdio.h>
int main()
{
    int a=5;
    //integer pointer will point to an integer variable
    int *p=&a; //'p' is an integer pointer will store address of 'a'
    printf("The value of a is:%d\n",*p); //output:5
    return 0;
}

#include<stdio.h>
int main()
{
    int a=5;
    //integer pointer will point to an integer variable
    int *p;
    p=&a; //'p' is an integer pointer will store address of 'a'
    printf("The value of a is:%d\n",*p); //output:5
    return 0;
}
//both codes are same
*/
//=======================================================================//
#include<stdio.h>
main()
{
	int a = 5;
	int *b;
	b = &a;
	printf ("value of a = %d",a);
	printf ("value of a = %d",*(&a));
         printf ("value of a = %d",*b);
         printf ("address of a = %u",&a);
         printf ("address of a = %u",b);
         printf ("address of b = %u",&b);
	printf ("value of b = address of a = %u",b);
}
//=======================================================================//
#include<stdio.h>
main ()
{
	char a = 'p';
	char *a1;
//'a1' is a character pointer will store address of character variable 'a'
	int b = 5;
	int *b1;
//'b1' is an integer pointer will store address of integer variable 'b'
	float c = 5.5;
	float *c1;
//'c1' is a float pointer will store address of float variable 'c'
	a1 = &a;
	b1 = &b;
	c1 = &c;
	printf("value of a = %c\n",a);
	printf("value of a = %c\n",*(&a));
	printf("value of a = %c\n",*a1);
	printf("value of b = %d\n",b);
	printf("value of b = %d\n",*(&b));
	printf("value of b = %d\n",*b1);
	printf("value of c = %f\n",c);
	printf("value of c = %f\n",*(&c));
	printf("value of c = %f\n",*c1);
	printf("address of  a = value of a1= %u\n",a1);
	printf("address of  b = value of b1= %u\n",b1);
	printf("address of  c = value of c1= %u\n",c1);
}
//Note: Pointer variable stores the address of the first byte.
//=======================================================================//
/*Pointer to Pointer: Pointer to Pointer means when one pointer variable 
stores/contains the address of a variable and another pointer variable 
stores/contains the address of that pointer variable*/
#include<stdio.h>
main()
{
	int a = 5;
	int *b;
	int **c;
	b = &a;
	c = &b;
	printf("value of a = %d\n",a);
	printf("value of a = %d\n",*(&a));
	printf("value of a = %d\n",*b);
	printf("value of a = %d\n",**c);
	printf("value of b = address of a = %u\n",b);
	printf("value of c = address of b = %u\n",c);
	printf("address of a = %u\n",&a);
	printf("address of a = %u\n",b);
	printf("address of a = %u\n",*c);
	printf("address of b = %u\n",&b);
	printf("address of b = %u\n",c);
	printf("address of c = %u\n",&c);
}
//Note: Here 'b' is a pointer variable which contains the address of 
//variable 'a'. 'c' is a pointer to a pointer variable, which contains the 
//address of the pointer variable 'b'
//=======================================================================//

