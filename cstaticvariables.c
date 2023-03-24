/*Static variables in C*/
/*
Local variable:-Variables which are accessed inside a function or a block 
are called Local variable.
Scope:- Scope is a region of the program where a defined variable can exist 
and beyond which it can't be accessed.
Global variable:-Global variables are accessible throughout the entire 
program.
*/
/*
If local & global variable has same name then local variable will take 
preference.
Ex:
#include <stdio.h>
int a=5; //global variable
int main()
{
    //some code
    return 0;
} 
int func()
{
    int a=8; //local variable
    printf("%d",a); //output=a=8
}
*/
/*
Formal arguments:-These variables are treated as local variables with a 
function.If formal & global variable has same name then formal arguments
will take preference.
*/
/*
Static variable:-Static variables which have a property of preserving their
values even when they go out of scope.They preserve their value from the 
previous scope and are not initialized again.Static variable remains in 
memory throughout the span of the program.Static variables are initialized 
0 if not initialized explicitly.In C, static variables can only be 
initialized using constant literals.
Syntax: static <data-type> <variable-name>=<value>;
        static int a=5;
*/
#include <stdio.h>
int b=34; //global variable
int func1(int b) //formal argument=local variable
{
	printf("the value of b inside func1 is %d\n",b);
	return b*10;
}
int main()
{
    int b=344;
    int value=func1(b);
    printf("the value of func1 is %d\n",value);
    return 0;
}
//output: 344 value of local variable will be printed
//=======================================================================//
#include <stdio.h>
int b=34; //global variable
int func1(int b) //formal argument=local variable
{
	static int variable=0;
	printf("the value of variable is %d\n",variable);
	return b+variable;
}
int main()
{
    int b=344;
    int value=func1(b);
    value=func1(b);
    return 0;
}
//output: the value of variable is 0
//        the value of variable is 0
//=====================================================================//
#include <stdio.h>
int b=34; //global variable
int func1(int b) //formal argument=local variable
{
	static int variable=0;
	printf("the value of variable is %d\n",variable);
	//when function is called 1st time that time variable=0
	//when function is called 2nd time that time variable=1
	variable++; //1st time variable=0+1=1
	//2nd time variable=1+1=2
	return b+variable;
}
int main()
{
    int b=344;
    int value=func1(b);
    value=func1(b);
    return 0;
}
//output: the value of variable is 0
//        the value of variable is 1
//======================================================================//
#include <stdio.h>
int b=34; //global variable
int func1(int b) //formal argument=local variable
{
	static int variable=0;
	printf("the value of variable is %d\n",variable);
	//when function is called 1st time that time variable=0
	//when function is called 2nd time that time variable=1
	variable++; //1st time variable=0+1=1
	//2nd time variable=1+1=2
	return b+variable;
}
int main()
{
    int b=344;
    int value=func1(b);
    value=func1(b);
    value=func1(b);
    value=func1(b);
    value=func1(b);
    return 0;
}
//output: the value of variable is 0
//        the value of variable is 1
//        the value of variable is 2
//        the value of variable is 3
//        the value of variable is 4
//====================================================================//

