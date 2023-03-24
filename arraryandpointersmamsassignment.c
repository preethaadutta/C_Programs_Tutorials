/*
Array and Pointers Relation mam's Assignment:-
*/
//WAP to accept 10 numbers and sort using pointers:-
#include <stdio.h>
int main()
{
    int n;
    printf("Enter number of elements in array:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
    	printf("Enter elements of array:");
         scanf("%d",&arr[i]);
    }
    int *p;
    p=arr;
    int temp;
    for(int i=0;i<n;i++)
    {
	for(int j=i+1;j<n;j++)
	{
	    if(*(p+j)<*(p+i))
	    {
	         temp=*(p+i);
	         *(p+i)=*(p+j);
	         *(p+j)=temp;
	     }
	}
    }
    for(int i=0;i<n;i++)
    {
         printf("%d\n",*(p+i));
    }
    return 0;
}

