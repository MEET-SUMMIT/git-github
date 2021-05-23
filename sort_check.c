#include<stdio.h>
int is_sorted(int A[],int n)
{
if (n==1)
{if(A[1]>=A[0])
return 1;
else 
return 0; }
else
{return A[n-1]>=A[n-2]?is_sorted(A,n-1):0;}

}
int main()
{int A[10]={2,2,2,2,2,2,2,2,2,2};
printf("%d",is_sorted(A,10));
return 0;
}