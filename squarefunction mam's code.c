#include<stdio.h>
#include<conio.h>
int square(int x)
{
       int square;
       square=x*x;
       return square;
}
main()
{
	int a,result;
	printf("Enter a=");
	scanf("%d",&a);
	result=square(a);
	printf("Square of the numbers=%d",result);
	return 0;
}
