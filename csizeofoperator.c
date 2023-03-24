/*sizeof operator in C*/
/*
The sizeof operator is a compile-time unary operator. It returns the size 
of a variable. It can be applied to any data type like float type, pointer 
type variables.
*/
#include <stdio.h>
int main() 
{
   int a = 16;
   printf("Size of variable a : %d\n",sizeof(a)); //4
   printf("Size of int data type : %d\n",sizeof(int)); //4
   printf("Size of char data type : %d\n",sizeof(char)); //1
   printf("Size of float data type : %d\n",sizeof(float)); //4
   printf("Size of double data type : %d\n",sizeof(double)); //8
   return 0;
}
//=======================================================================//
#include <stdio.h>
int main() 
{
   char a = 'S'; 
   double b = 4.65;
   printf("Size of variable a : %d\n",sizeof(a)); //1
   printf("Size of an expression : %d\n",sizeof(a+b)); //8
   int s = (int)(a+b);
   printf("Size of explicitly converted expression : %d\n",sizeof(s)); //4
   return 0;
}
//=======================================================================//
#include<stdio.h>
int main() 
{
char *p;
printf("%d",sizeof(*p)); //1
return 0;
}
//=======================================================================//
#include<stdio.h>
int main() 
{
char *p;
printf("%d",sizeof(p));
return 0;
}
//=======================================================================//
#include<stdio.h>
int main() 
{
char *p;
printf("%d,%d",sizeof(int *),sizeof(int **)); //8,8
return 0;
}
//=======================================================================//
#include<stdio.h>
int main() 
{
printf("%d,%d",sizeof(int *),sizeof(int **)); //8,8
return 0;
}
//=======================================================================//
#include <stdio.h>
int main() 
{
   int i = 10,j=10,k=100;
   printf("%d\n",sizeof(k/=i+j)); //4
   printf("%d\n",k); //100
   return 0;
}
//=======================================================================//
#include <stdio.h>
int main() 
{
   int i = 15;
   int j=sizeof(i++);
   printf("%d %d\n",i,j); //15 4
   return 0;
}
//=======================================================================//

