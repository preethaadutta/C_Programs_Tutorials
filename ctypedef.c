/*typedef in C*/
/*
typedef:- typedef is a keyword which is used to give alternate names to 
existing datatypes.
Syntax of typedef:-
typedef <previous_name> <alias_name or new_name>;
*/
#include <stdio.h>
int main()
{
//Syntax:typedef <previous_name> <alias_name>;
         typedef unsigned long ul;
         ul n1,n2,n3;
         typedef int integer;
         integer a=4;
	printf("a=%d",a);
	return 0;
}
//=======================================================================//
#include<stdio.h>
#include<string.h>
typedef struct Students //structure datatype Students has been created
{
      int id;
      char name[20];
      int marks;
      char section;
}s; //we're giving new name of structure student datatype
int main()
{	
        s s1,s2,s3;
        //<Structure_Name> <Member_Name>=<some value>;
        s1.id=2;
        s1.marks=90;
        s1.section='A';
        strcpy(s1.name,"Ajoy");
        s2.id=4;
        s2.marks=88;
        s2.section='B';
        strcpy(s2.name,"Bijoy");
        s3.id=5;
        s3.marks=84;
        s3.section='A';
        strcpy(s3.name,"Sinjoy");
        printf("student1 Id:%d & Marks:%d & Section:%c & Name:%s\n",
        s1.id,s1.marks,s1.section,s1.name);
        printf("student2 Id:%d & Marks:%d & Section:%c & Name:%s\n",
        s2.id,s2.marks,s2.section,s2.name);
        printf("student3 Id:%d & Marks:%d & Section:%c & Name:%s\n",
        s3.id,s3.marks,s3.section,s3.name);
        return 0;
}
//=======================================================================//
#include<stdio.h>
int main()
{
	int* a,b; //it means a is a pointer and b is normal integer
	//int *a,b; //same as above
	int c=5;
	a=&c;
	return 0;
}
//=======================================================================//
#include<stdio.h>
int main()
{
	typedef int* intpointer; //we're giving new name of int*
	intpointer a,b; //now a,b are two integer pointers
	int c=5;
	a=&c;
	b=&c;
	return 0;
}
//=======================================================================//
