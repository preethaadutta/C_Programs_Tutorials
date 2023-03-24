/*Other Directives and Predefined Macros in C*/
/*
#undef: it undefines a macro or any preprocessor variable
#ifdef: it returns true if a preprocessor variable or macro is defined
#ifndef: it returns true if a preprocessor variable or macro is not defined
#if: if
#else: else
#elif: if-else
#pragma:to issue some special commands to the compiler
*/
/*
Predefined Macros in C:-
__DATE__ 
the current date as string literal in "MMM DD YYYY" format.
Ex: Jan 05 2022
__TIME__ 
this contains the current time as a string literal in "HH:MM:SS" format.
Ex: 04:15:20
__FILE__
the current filename as a string literal.
__LINE__
the current line number as a decimal constant.
__STDC__
returns 1 when compiler compiles with the ANSI standard.
by this we can check whether the compiler compiling with ANSI standard
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	printf("Today's date is %s\n",__DATE__);
	//printing today's date as string literal in "MMM DD YYYY" format.
	printf("Now time is %s\n",__TIME__);
	//printing current time as a string literal in "HH:MM:SS"
	//format.
	printf("File name is %s\n",__FILE__); 
	//it'll print the current filename as a string literal
	//for my case it is becoming the whole directory of this file
	//don't know right or wrong or why it is happenning
	printf("Line number is %d\n",__LINE__); 
	//it'll print the current line number as an integer.
	printf("ANSI: %d\n",__STDC__);
	//returns 1 when compiler compiles with the ANSI standard.
	return 0;
}
