#include <stdio.h>
void tower_of_hanoi(int n,char source,char destination,char aux)
{
 if(n>=1)
 {
    tower_of_hanoi(n-1,source,aux,destination);
    printf("transfer from %c to %c\n",source,destination);
    tower_of_hanoi(n-1,aux,destination,source);
}
}
int main()
{int n;
    printf("enter the number of disc:");
    scanf("%d",&n);
    tower_of_hanoi(n,'A','B','c');
    return 0;
}