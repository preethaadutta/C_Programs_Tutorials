/*Escape Sequences in C*/
/*
Escape Sequence:In C escape Sequence is a sequence of characters which is
composed by two or more characters starting with backslash \
In C there're many Escape Sequences:-
1) \n - for new line
2) \t - for new tab
3) \v - for vertical tab
4) \b - for backspace
5) \a - alarm or beep sound
6) \? - for question mark
7) \' - for single quote
8) \" - for double quote
9) \\ - for backslash
10) \nnn - for octal number
*/ 
#include<stdio.h>
int main()
{
	int a,b; 
	a=15;
	b=45;
	printf("Value of a is:%d\n",a); //for \n control will go to the 
	//next line after line16
	printf("Value of a is:%d",b);
	return 0;
}
//=======================================================================//
#include<stdio.h>
int main()
{
	int a,b; 
	a=15;
	b=45;
	printf("Value of a is:%d and blackslash is:\\",a); 
	//for \\ control will print single blackslash
	printf("Value of a is:%d and blackslash is:\\n",a); 
	//for \\n control will print \n
	return 0;
}
//=======================================================================//
#include<stdio.h>
int main()
{
	int a,b; 
	a=15;
	b=45;
	printf("tab space is:\t",a); 
	//for \t control will print tab space
	printf("Value of a is:%d and blackslash is:\t\t",a); 
	//for \t\t control will print tab spaces
	return 0;
}
//=======================================================================//
#include<stdio.h>
int main()
{
	printf("listen to windows beep sound:\a"); 
	//for \a windows beep sound will come out
	return 0;
}
//=======================================================================//

