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
enum week{Mon,Tues,Wed,Thurs,Fri,Sat};
int main()
{
	enum week day;
	day=Thurs;
	printf("%d",day);
	return 0;
}
//Output: 
//=======================================================================//
//vvvv.imp. for code snippets
#include <stdio.h>
int main()
{
    int main=5;
    printf("%d",main);
    return 0;
}
//output: 5
//=======================================================================//
#include<stdio.h>
int main()
{
	int PI=3.14;
	printf("%d\n",PI); //output: 3
	return 0;
}
//=======================================================================//

