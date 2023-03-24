/*Data types in C*/
/*
Basic Data types: int,char,float,double
Derived Data types: array,pointer,structure,union
Enumeration Data types: enum
Void Data types: void
Enumeration in C:Enumeration is a user defined data type in C.it is mainly 
used to assign names to integral constants.The keyword 'enum' is used to 
declare new enumeration types in C.
*/
#include<stdio.h>
//variables of type enum can be defined like this
//Method 1:-
enum week{Mon,Tues,Wed,Thurs,Fri,Sat};
int main()
{
	enum week day;
	day=Thurs;
	printf("%d",day);
	return 0;
}
//Output: 3
//======================================================================//
#include<stdio.h>
int main()
{
	//variables of type enum can be defined like this
         //Method 2:-
	enum week {Mon,Tues,Wed,Thurs,Fri,Sat} day;
	day=Thurs;
	printf("%d",day);
	return 0;
}
//Output: 3
//======================================================================//
#include<stdio.h>
enum week{Mon,Tues,Wed,Thurs,Fri,Sat};
int main()
{
	int i;
	for(i=Mon;i<=Sat;i++)
	{
		printf("%d",i);
	}
	return 0;
}
//Output: 012345
//======================================================================//
#include<stdio.h>
enum State{Working=1,Freezed=0,Failed=0};
int main()
{
	printf("%d,%d,%d",Working,Freezed,Failed);
	return 0;
}
//Output: 100
//======================================================================//
#include<stdio.h>
enum day{Sun,Mon,Tues,Wed,Thurs,Fri,Sat};
int main()
{
	enum day d=Thurs;
	printf("The number stored in d is %d",d);
	return 0;
}
//Output: The number stored in d is 4
//======================================================================//
#include<stdio.h>
enum day{Sun=1,Mon,Tues=5,Wed,Thurs=10,Fri,Sat};
int main()
{
	printf("%d\n",Sun); //output: 1
	printf("%d\n",Mon); //output: 2
	printf("%d\n",Tues); //output: 5
	printf("%d\n",Wed); //output: 6
	printf("%d\n",Thurs); //output: 10
	printf("%d\n",Fri); //output: 11
	printf("%d\n",Sat); //output: 12
	return 0;
}
//======================================================================//
