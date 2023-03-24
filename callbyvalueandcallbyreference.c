/*Call by Value & Call by Referrence*/
/*
Actual Parameters:- Actual Parameters are the variables that are passed to 
the function when it is invoked. 
Actual Parameter=Local Variable

Formal Parameters:- Formal Parameters are the variables defined by the 
function that receives values when function is called. 
Formal Parameter=Global Variable
Formal Parameters are the copy of Actual Parameters

Ex:-
#include<stdio.h>
int add(int a,int b) //a,b are Formal Parameters //Function block
{
    int s=a+b;
    return s;
}
int main() //Main block
{
     int x=2,y=3;    //x,y are Actual Parameters
     int sum=add(x,y); //function call by value
     printf("Sum is: %d",sum);
     return 0;
}
*/
/*
In C we can call a function in two different ways:-

1) Call by Value:-here Actual Parameters values are copied to Formal 
Parameters so Actual Parameters values will not change after copying it to 
Formal Parameters.
Ex:-
#include<stdio.h>
int add(int a,int b) //a,b are Formal Parameters //Function block
{
    int s=a+b;
    return s;
}
int main() //Main block
{
     int x=2,y=3;    //x,y are Actual Parameters
     int sum=add(x,y); //function call by value
     printf("Sum is: %d",sum);
     return 0;
}
here values of x,y are copied to a,b so if we change a,b values in the 
Function block then in the Main block x,y values will not be changed.
2) Call by Reference:-here address of Actual Parameters are copied to 
Formal Parameters so as addresses are copied so pointer is used.Then we 
dereferenced the address pointer with * operator.As address of Actual 
Parameters are sent so here Actual Parameters values can be changed after 
copying it to Formal Parameters.
Ex:-
void swap(int *a,int *b) //a,b are Formal Parameters //Function block
//*a is containing address of x
//*b is containing address of y
{
     int temp;
     temp=*a; //putting 2 into temp
     *a=*b; //putting 3 into a
     *b=temp; //putting 2 into b
}
int main() //Main block
{
     int x=2,y=3;    //x,y are Actual Parameters
     printf("Before swaping: %d,%d\n",x,y);
     swap(&x,&y); //function call by reference 
     printf("After swaping: %d,%d\n",x,y);
     return 0;
}
here addresses of x,y are copied to a,b so if we change a,b values in the 
Function block then in the Main block x,y values will be changed.
*/
#include <stdio.h>
void changeValue(int *address)
{
    *address=45;
}
int main()
{
    int a=4;
    printf("Now value of a is:%d\n",a); //output: 4
    changeValue(&a); //function call by reference
    printf("Now value of a is:%d\n",a); //output: 45
    return 0;
}
//=======================================================================//

