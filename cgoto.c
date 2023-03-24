/*Goto statement in C*/
/*
Goto statement:Goto statement is used to transfer control into a particular 
line of the program. It is also called jump statement in C. It is preferable
when we need to break multiple loops using a single statement. 
Ex: \n,\t,
1) \n - for new line
2) \t - for new tab
*/
#include <stdio.h>
int main()
{
	label:
                  printf("We're inside label");
         printf("Hello World\n");
         goto label; 
         return 0;
}
//output:We're inside labelHello World
//it'll be infinite loop
//=======================================================================//
#include <stdio.h>
int main()
{
    label:
        printf("We're inside label");
        goto end;
        printf("Hello World\n");
        goto label; 
    end:
        printf("We're at end");
    return 0;
}
//output:We're inside labelWe're at end
//=======================================================================//
#include <stdio.h>
int main()
{
    int num;
    for(int i=0;i<8;i++)
    {
    	printf("%d\n",i);
    	for(int j=0;j<8;j++)
    	{
    		printf("Enter the number\n");
    		scanf("%d",&num);
    		if(num==0)
    		{
		    goto end;       	
		}
	}
    }
    end:
    return 0;
}
//this 0 is given then control will come out of the nested for loop
//=======================================================================//

