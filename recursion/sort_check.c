#include<stdio.h>
#include<stdlib.h>
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
{int *a,n,i=0;
/*enter the value of n greater than 1*/
printf("enter the number of data items:");
scanf("%d",&n);
if(n<2)
{printf("invalid input");
return 0;}

printf("enter %d elements:\n",n);
a=(int*)malloc(n*4);
for(;i<n;i++)
scanf("%d",&a[i]);
is_sorted(a,n)?printf("\nthe array is sorted"):printf("\nthe array is not sorted");
free(a);
return 0;
}