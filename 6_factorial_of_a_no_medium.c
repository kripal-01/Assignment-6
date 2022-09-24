// 6. Write a program to calculate factorial of a number
#include<stdio.h>
int main()
{
    int n,m,i;
    printf("enter n");
    scanf("%d",&n);
    for (i=n,m=1;i>=1;i--)
    {
        m=m*i;
        // if(i==1)
        // printf("%d",m);
        /* code */
    }
    printf("%d",m);
}