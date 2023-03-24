/*Arrays and Pointer Arithmetic in C*/
/*
Pointer Arithmetic: There are four arithmetic operations that can be used 
on Pointers:-
1) +
2) -
3) ++
 means p=p+1
4) --
 means p=p-1
*/
//**size of any datatype depends upon different architectures
//1) + operator:
#include<stdio.h>
int main()
{
    int a=5;
    //integer pointer will point to an integer variable
    int *p=&a; //'p' pointer will store address of a
    printf("%d\n",p); //output:The address of a
    printf("%d\n",p+1); //output:The address of a+(1*size of int)
    //as p is integer pointer
    //size of int =2 bytes
    //output:The address of a+(1*2)
    printf("%d\n",p+2); //output:The address of a+(2*size of int)
    //as p is integer pointer
    //size of int =2 bytes
    //output:The address of a+(2*2)
    return 0;
}
//=======================================================================//
#include <stdio.h>
int main()
{
    char a='5';
    //character pointer will point to an character variable
    char *p=&a; //'p' pointer will store address of a
    printf("%d\n",p); //output:The address of a
    printf("%d\n",p+1); //output:The address of a+(1*size of char)
    //as p is character pointer
    //size of char=1 byte
    //output:The address of a+(1*1)
    printf("%d\n",p+2); //output:The address of a+(2*size of char)
    //as p is character pointer
    //size of char =1 byte
    //output:The address of a+(2*1)
    return 0;
}
//=======================================================================//
//2) - operator:
#include <stdio.h>
int main()
{
    int a=5;
    //integer pointer will point to an integer variable
    int *p=&a; //'p' pointer will store address of a
    printf("%d\n",p); //output:The address of a
    printf("%d\n",p-1); //output:The address of a-(1*size of int)
    //as p is integer pointer
    //size of int =2 byte
    //output:The address of a-(1*2)
    printf("%d\n",p-2); //output:The address of a-(2*size of int)
    //as p is integer pointer
    //size of int =2 byte
    //output:The address of a-(2*2)
    return 0;
}
//=======================================================================//
//3) ++ operator:
#include <stdio.h>
int main()
{
    int a=5;
    //integer pointer will point to an integer variable
    int *p=&a; //'p' pointer will store address of a
    printf("%d\n",p); //output:The address of a
    p++; //p=The address of a+(1*size of int) //p=p+1;
    printf("%d\n",p); //output:The address of a+(1*size of int)
    //as p is integer pointer
    //size of int =2 bytes
    //output:The address of a+(1*2)
    return 0;
}
//=======================================================================//
//4) -- operator:
#include <stdio.h>
int main()
{
    int a=5;
    //integer pointer will point to an integer variable
    int *p=&a; //'p' pointer will store address of a
    printf("%d\n",p); //output:The address of a
    p--; //p=The address of a-(1*size of int) //p=p-1;
    printf("%d\n",p); //output:The address of a-(1*size of int)
    //as p is integer pointer
    //size of int =2 bytes
    //output:The address of a-(1*2)
    return 0;
}
//=======================================================================//
/*
Relation between arrays and pointers:-
int array[10]; //declaration of integer array of size 10
//1st element of this array will be array[0]
int *p=array; //p is a pointer which points to array[0]
//means p is a pointer in which address of array[0] is stored
printf("%d\n",&array[0]); 
printf("%d\n",p);   
//107 and 108 both are same 
array[i] 
*(array+i)
//110 and 111 both are same as array[i] is using Pointer Arithmetic
*/

/*
if &array[0]=1000 and the array is integer array and size of integer=4 
byte then *(array+32)=?
Ans: pointer(array+32)=1000+32*(size of integer)=1000+32*4=1128
*/
#include <stdio.h>
int main()
{
    int array[]={1,2,3,4,5};
    printf("The element at 1st index of the array is:%d\n",array[0]);
    printf("The address of 1st element of the array is:%d\n",&array[0]);
    printf("The address of 1st element of the array is:%d\n",array);
    printf("The address of 2nd element of the array is:%d\n",&array[1]);
    printf("The address of 2nd element of the array is:%d\n",array+1);
    return 0;
}
//125 and 126 both are same
//127 and 128 both are same 
//=======================================================================//
#include <stdio.h>
int main()
{
int array[]={1,2,3,4,5};
printf("value at address of 1stelement of the array is:%d\n",*(&array[0]));
printf("value at address of 1stelement of the array is:%d\n",*(array));
printf("value at address of 2ndelement of the array is:%d\n",*(&array[1]));
printf("value at address of 2ndelement of the array is:%d\n",*(array+1);
//array++ or array-- it'll give error
return 0;
}
//138 and 139 both are same
//140 and 141 both are same 
//=======================================================================//
#include <stdio.h>
int main()
{
       int array[]={1,2,3,4,5};
       int *arraypointer=array;
       arraypointer++; //arraypointer--; //now it'll not give error
       return 0;
}
//=======================================================================//

