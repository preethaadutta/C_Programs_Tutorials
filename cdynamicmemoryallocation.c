/*Dynamic Memory Allocations in C*/ /*Tutorial 45*/
/*
What & why Dynamic Memory Allocation?
An statically allocated variable or array has a fixed size in memory.We've
learnt to create big enough arrays to fit in our inputs but this doesn't 
seem like an optional way to allocate memory.Memory is useful resource.We 
need a way to request memory on runtime.
Dynamic Memory Allocation: it is a way in which the size of a data 
structure can be changed during the runtime.
*/
/*
Memory Allocations in C:-
Memory assigned to a program in a typical architecture can be broken down 
into four segments:-
1) Code or text segment:- where code is saved
2) Static/global variable:-a) data segment:-initialized storage segment
                           b) bss segment:-uninitialized storage segment
3) Stack:- it grows when program proceeds further
Stack follows LIFO principle
4) Heap:- it grows when we do Dynamic Memory Allocation
*/
/*
Memory Layout in C:-
Stack overflow:-Compiler allocates some space for the stack part of the 
memory.When this space gets exhausted for some bad reason, the situation 
is called as Stack overflow.
Ex:- recursion with wrong/no base condition
*/
/*
Use of Heap in C:-
There are lot of limitations of stack(static memory allocation).Heap can 
be used flexibly by the programmar as per his code.
We can create a pointer in our main function and point to a memory block 
in the heap.The address is stored by the local variable in the main 
function.The memory consumed will not get freed automatically in case we 
overwrite the pointer.
*/
/*
Functions for Dynamic Memory Allocation in C:-
In Dynamic Memory Allocation, the memory is allocated at runtime from the 
Heap segment.All these functions comes in stdlib.h header file.
We've 4 functions for Dynamic Memory Allocation in C:-
1) malloc() stands for memory allocation.It reserves a block of memory 
with the given amount of bytes.The return value is a void pointer to the 
 allocated space.Therefore the void pointer needs to be casted to the 
 appropriate type as per requirements.if space is insufficient,allocation 
 of memory fails and it returns a NULL pointer.All the values at allocated 
 memory are initialized to garbage values.
 Syntax:    pointer=(pointer-type*) malloc(size_in_bytes);
 
 Ex:     int *pointer;
pointer=(int*) malloc(3*sizeof(int))//3 because we need 3 integers
//sizeof() function is used because size of any data-type is not fixed for 
//all architectures(computers)
2) calloc() stands for contiguous allocation.It reserves n blocks of 
memory with the given amount of bytes.The return value is a void pointer 
to the allocated space.Therefore the void pointer needs to be casted to 
the appropriate type as per requirements.if space is insufficient,
allocation of memory fails and it returns a NULL pointer.All the values 
at allocated memory are initialized to 0.
 Syntax:    pointer=(pointer-type*) calloc(n,size_in_bytes);
 
 Ex:     int *pointer;
pointer=(int*) calloc(3,sizeof(int))//3 because we need 3 integers
//sizeof() function is used because size of any data-type is not fixed for 
//all architectures(computers)
3) realloc() stands for reallocation.if the dynamically allocated memory 
is insufficient we can change the size of previously allocated memory 
using realloc() function.
 Syntax:    pointer=(pointer-type*) realloc(pointer,new_size_in_bytes);
 
 Ex:     int *pointer;
         pointer=(int*) calloc(3,sizeof(int))//3 because we need 3 integers
//sizeof() function is used because size of any data-type is not fixed for 
//all architectures(computers)
4) free() is used to free the allocated memory.if the dynamically allocated
 memory is not required anymore,we can free it using free function.this 
 will free the memory being used by the program in the heap.
 Syntax:    free(pointer);
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    //use of malloc()
    int *pointer;
    pointer=(int *)malloc(3*sizeof(int));
    //creating dynamically allocated array
    for(int i=0;i<3;i++) //to traverse
    {
    	printf("Enter the value no %d of this array\n",i);
    	//pointer[i] means *pointer+i means value at pointer+i 
    	scanf("%d",&pointer[i]); //taking user input of elements of array
    }
    //printing dynamically allocated array
    for(int i=0;i<3;i++) //to traverse
    {
    	printf("The value at %d of this array is %d\n",i,pointer[i]);
    	//pointer[i] means *pointer+i means value at pointer+i 
    }	
    return 0;
}
//It is running correctly in onlinegdp but here it is causing error
//======================================================================//
#include<stdio.h>
#include<stdlib.h>
int main()
{
    //use of malloc()
    int *pointer;
    pointer=(int *)malloc(3*sizeof(int));
    //creating dynamically allocated array
    for(int i=0;i<3;i++) //to traverse
    {
    	printf("Enter the value no %d of this array\n",i);
    	//pointer[i] means *pointer+i means value at pointer+i 
    	scanf("%d",&pointer[i]); //taking user input of elements of array
    }
    //printing dynamically allocated array
    for(int i=0;i<4;i++) //we're traversing more index
    {
    	printf("The value at %d of this array is %d\n",i,pointer[i]);
    	//pointer[i] means *pointer+i means value at pointer+i 
    }	
    return 0;
}
//in the last index means 4th index the garbage value will be printed
//======================================================================//
#include<stdio.h>
#include<stdlib.h>
int main()
{
    //use of malloc()
    int *pointer;
    int n;
    pointer=(int *)malloc(n*sizeof(int));
    printf("Enter the size of the array:\n");
    scanf("%d",&n);
    //creating dynamically allocated array
    for(int i=0;i<n;i++) //to traverse
    {
    	printf("Enter the value no %d of this array:\n",i);
    	//pointer[i] means *pointer+i means value at pointer+i 
    	scanf("%d",&pointer[i]); //taking user input of elements of array
    }
    //printing dynamically allocated array
    for(int i=0;i<n;i++) 
    {
    	printf("The value at %d of this array is: %d\n",i,pointer[i]);
    	//pointer[i] means *pointer+i means value at pointer+i 
    }	
    return 0;
}
//======================================================================//
#include<stdio.h>
#include<stdlib.h>
int main()
{
    //use of calloc()
    int *pointer;
    int n;
    printf("Enter the size of the array:\n");
    scanf("%d",&n);
    pointer=(int *)calloc(n,sizeof(int));
    //creating dynamically allocated array
    for(int i=0;i<n;i++) //to traverse
    {
    	printf("Enter the value no %d of this array:\n",i);
    	//pointer[i] means *pointer+i means value at pointer+i 
    	scanf("%d",&pointer[i]); //taking user input of elements of array
    }
    //printing dynamically allocated array
    for(int i=0;i<n;i++) 
    {
    	printf("The value at %d of this array is: %d\n",i,pointer[i]);
    	//pointer[i] means *pointer+i means value at pointer+i 
    }	
    return 0;
}
//======================================================================//
#include<stdio.h>
#include<stdlib.h>
int main()
{
    //use of calloc()
    int *pointer;
    int n;
    printf("Enter the size of the array:\n");
    scanf("%d",&n);
    pointer=(int *)calloc(n,sizeof(int));
    //creating dynamically allocated array
    for(int i=0;i<n;i++) //to traverse
    {
    	printf("Enter the value no %d of this array:\n",i);
    	//pointer[i] means *pointer+i means value at pointer+i 
    	scanf("%d",&pointer[i]); //taking user input of elements of array
    }
    //printing dynamically allocated array
    for(int i=0;i<n;i++) //we're traversing more index
    {
    	printf("The value at %d of this array is: %d\n",i,pointer[i]);
    	//pointer[i] means *pointer+i means value at pointer+i 
    }
    //use of realloc()
    printf("Enter the size of the new array:\n");
    scanf("%d",&n);
    pointer=(int *)realloc(pointer,n*sizeof(int));
    //creating dynamically allocated array
    for(int i=0;i<n;i++) //to traverse
    {
    	printf("Enter the new value no %d of this array:\n",i);
    	//pointer[i] means *pointer+i means value at pointer+i 
    	scanf("%d",&pointer[i]); //taking user input of elements of array
    }
    //printing dynamically allocated array
    for(int i=0;i<n;i++)
    {
    	printf("The new value at %d of this array is: %d\n",i,pointer[i]);
    	//pointer[i] means *pointer+i means value at pointer+i 
    }
    free(pointer); //utilized heap memory will be freed
    //we can free the utilized heap memory at any time 
//in the middle of program we can also free the utilized heap memory	
    return 0;
}
//======================================================================//

