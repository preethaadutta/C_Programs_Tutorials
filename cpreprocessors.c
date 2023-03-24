/*Pre-processor in C*/
/*
How C programs run:-
1)Compiler converts textual form of a C program into an executable .exe file
a) Preprocessing:- 1) removal of comments
                   2) Expansion of Macros or include files
                   3)
b) Compilation:- assembly level instructions are generated
c) Assembly:- .o and .exe files are generated. function call or printf are 
not resolved. assembly level instructions are converted to machine code
d) Linking:- links the functions implementations
*/
/*
Pre-processor in C:- Pre-processor comes under action before the actual 
compilation process. It is not a part of the c compiler. It is a text 
substitution tool. All preprocessor commands begin with a hash(#) symbol.
Ex: #include<stdio.h>
    #include<conio.h>
    #include<string.h>
    #include<math.h>
    #include<stdlib.h>
*/
/*
Preprocessor Commands examples:-
#include: it inserts one header file in another file
Ex: #include<stdio.h> it inserts all the contents, which are there in 
stdio.h header file, in current program file
#define: is called macros 
#undef:
#ifdef:
#ifndef:
#if: if any compile time condition is true
#else: 
#elif:
*/
/*
#include directive: #include directive causes the preprocessor to fetch the 
contents of some other files to be included in the present program file. 
This file may in turn #include some other files which may in turn do the 
same. Most commonly the #include files have a ".h" extension, indicating 
that they are header files.
*/
/*
Two common #include formats:-
In C there are two common formats #include
     #include<headerFile.h> //The angle brackets say to look in the 
     standard system directories
     #include"stdio.h" //The quotation marks say to look in the current 
     directory
Disk drive full path is allowed, but discouraged since it is not portable
     #include<C:\Program Files\Harry\bhai\somefile.h> //Too specific
     #include<sys/file.h> //Relative and porable path to the standard 
     locations
*/
/*
#define directive: #define directive is used to "define" preprocessor 
"variables". The #define preprocessor directive can be used to globally 
replace a word with a number. It acts as if an editor did a global 
search-and-replace edit of the file.
Ex: #define PI 3.14
    in the example #define will replace PI constant with 3.14
*/
#include<stdio.h>
#include<stdlib.h>

