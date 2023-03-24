/*Switch case*/
/*Output not coming*/
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter 1st number:");
    scanf("%d",&a);
    printf("Enter 2nd number:");
    scanf("%d",&b);
    char ch;
    printf("Enter what calculation you want to do:");
    scanf("%c",&ch);
    int result;
    float result1;
    switch(ch)
    {
    	case 'A':
    		result=a+b;
    		printf("Result=%d",result);
    		break;
    	case 'S':
    		if(a>b)
    		{
		    result=a-b;
		    printf("Result=%d",result);	
		}
		else
		{
		    result=b-a;
		    printf("Result=%d",result);	
		}
		break;
	case 'M':
		result=a*b;
		printf("Result=%d",result);
		break;
	case 'D':
		if(a>b)
    		{
		    result1=a/b;
		    printf("Result=%f",result1);	
		}
		else
		{
		    result1=b/a;
		    printf("Result=%f",result1);
		}
		break;
	default:
		printf("No choice found");
    }
    return 0;
}

