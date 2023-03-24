/*Pre & Post Increament Operators & volatile keyword*/
/*reference from Yogin Savani C tutorial video*/
#include<stdio.h>
int main()
{
	int i=10; 
	printf("%d %d %d\n",i++,i++,i++);
	return 0;
}
//output: 12 11 10
//========================================================================//
#include<stdio.h>
int main()
{
	int i=10; 
	printf("%d %d %d\n",++i,++i,++i);
	return 0;
}
//output: 13 13 13
//here i=13 is stored in cache memory or static RAM so each time output 
//will be 13 13 13
//========================================================================//
#include<stdio.h>
int main()
{
	int i; 
	scanf("%d",&i);
	printf("%d %d %d\n",++i,++i,++i);
	return 0;
}
//output: 13 12 11
//here we're taking user input so runtime allocate memory so it'll be stored
//in dynamic memory or dynamic RAM so each time output 
//will be 13 12 11
//========================================================================//
#include<stdio.h>
int main()
{
	volatile int i=10; 
	printf("%d %d %d\n",++i,++i,++i);
	return 0;
}
//output: 13 12 11
//here i is stored in dynamic memory or dynamic RAM so each time output 
//will be 13 12 11
//========================================================================//

