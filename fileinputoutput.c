/*File I/O in C*/
/*
Why do we need a File?
Files are used to store data and information. Files are used to read & 
access data anytime from the hard disk.Files make it easy for a programmer 
to access and store content without losing it on program termination.
data- data is bits of storage which we collect
information- after processing data it becomes meaningful it is information.

Volatile Memory:-Ex: RAM
Those variables which we declare in the program those are stored in RAM 
memory. After execution of the program it gets lost.
Non-Volatile Memory:-Ex: Hard disk

Types of files:-
1) Text files:- data is stored plain text format.
2) Binary files:- data is stored as 0 and 1.it is more secure

High level File Operations in C:-
1) Creating a new file
2) Opening a file
3) Closing a file
4) Reading from and writing to a file
*/
/*
Working with Files in C:-
When working with files, we've to declare a pointer of type FILE
FILE *pointer1=NULL; //It is a null pointer 
//if we donot do so then it'll take garbage value

//Opening a file- creating or editing a file
//stdio.h header file contains function fopen() for opening files in c
//Syntax: <pointer name>=fopen("filename","mode");
"mode"- "r" for reading purpose-read mode
        "w" for writing purpose-write mode
        "a" for writing after contents of old file-append mode
        "r+" for reading & writing both-reading & writing mode
Ex:
for text file-
    fopen("test.txt","w");     fopen("E:\\Code\\test.txt","w");
for binary file-
    fopen("test.txt","wb");    fopen("E:\\Code\\test.txt","wb"); 
    fopen("test.txt","rb");    fopen("E:\\Code\\test.txt","rb");

//Closing a file- any file which is opened in C needs to be closed
//stdio.h header file contains function fclose() for closing files in c
//Syntax: fclose(pointer name);
Ex:
for text file-
    
for binary file-
    fopen("test.txt","wb");    fopen("E:\\Code\\test.txt","wb"); 
    fopen("test.txt","rb");    fopen("E:\\Code\\test.txt","rb");
    
//Reading a file- we've to open the file in read mode to use this function
//stdio.h header file contains function fscanf() for reading files in c
//Syntax: fscanf(pointer name,"%s",string);

//Writing a file- we've to open the file in write mode to use this function
//stdio.h header file contains function fprintf() for reading files in c
//Syntax: fprintf(pointer name,"%s",string);

*/

