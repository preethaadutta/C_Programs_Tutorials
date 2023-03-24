/*Structure in C*/

/*
Structures:- Structures, are user defined datatypes, which can contain 
elements of different datatypes together.
Ex:- Stroing 500 Student's informations:-
1) id
2) marks
3) section
*/

/*
Syntax of Defining and Declaring a structure datatype:- Two types
struct <Structure_Name>
{
<datatype> <variablename1>;
<datatype> <variablename2>;
<datatype> <variablename3>;
};
struct <Structure_Name> <Structure_Variablenames>;//OR//<Structure_Variablenames>;

struct Students //structure datatype Students has been created
{
int id;
int marks;
char section;
};
int main()
{
struct Students s1,s2,s3;
return 0;
}
//OR//
struct Students //structure datatype Students has been created
{
int id;
int marks;
char section;
}
s1,s2,s3;
*/

/*
Initializing a structure datatype:- Two types
int main()
{
struct Students s1;
<Structure_Name> <Member_Name>=<some value>;
s1.id=2;
s1.marks=90;
s1.section='A';
return 0;
}
//OR//
int main()
{
struct Students s1={2,90,'A'};
return 0;
}
*/
struct Students //structure datatype Students has been created
{
int id;
int marks;
char section;
};
#include<stdio.h>
int main()
{
struct Students s1,s2,s3;
//<Structure_Name> <Member_Name>=<some value>;
s1.id=2;
s1.marks=90;
s1.section='A';
s2.id=4;
s2.marks=88;
s2.section='B';
s3.id=5;
s3.marks=84;
s3.section='A';
printf("student1 Id:%d & Marks:%d & Section:%c\n",s1.id,s1.marks,s1.section);
printf("student2 Id:%d & Marks:%d & Section:%c\n",s2.id,s2.marks,s2.section);
printf("student1 Id:%d & Marks:%d & Section:%c\n",s3.id,s3.marks,s3.section);
return 0;
}
//=======================================================================//
#include<stdio.h>
#include<string.h>
struct Students //structure datatype Students has been created
{
      int id;
      char name[20];
      int marks;
      char section;
};
//struct Students s1,s2,s3; 
int main()
{	
        struct Students s1,s2,s3; //now s1,s2,s3 are Local Variables
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
        printf("student1 Id:%d & Marks:%d & Section:%c & Name:%s\n",s1.id,s1.marks,s1.section,s1.name);
        printf("student2 Id:%d & Marks:%d & Section:%c & Name:%s\n",s2.id,s2.marks,s2.section,s2.name);
        printf("student3 Id:%d & Marks:%d & Section:%c & Name:%s\n",s3.id,s3.marks,s3.section,s3.name);
        return 0;
}
//=======================================================================//
#include<stdio.h>
#include<string.h>
struct Students //structure datatype Students has been created
{
      int id;
      char name[20];
      int marks;
      char section;
};
struct Students s1,s2,s3; //now s1,s2,s3 are Global Variables
void print()
{
	printf("%s",s1.name);
}
int main()
{	
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
        print();
        return 0;
}
//=======================================================================//

