#include<stdio.h>
#include<conio.h>
int sub(int a, int b)
{
       int sub;
       sub=a-b;
       return sub;
}
main()
{
	int x,y,z;
	printf("Enter x=");
	scanf("%d",&x);
	printf("Enter y=");
	scanf("%d",&y);
	z=sub(x,y);
	printf("Substraction of the numbers=%d",z);
	return 0;
}
