// 5. Write a program to calculate sum of cubes of first N natural numbers
#include<stdio.h>
int main()
{
    int n,s,i;
    printf("enter n");
    scanf("%d",&n);
    for (i=1,s=0;i<=n;i++)
    {
        s=s+i*i*i;
        // if(i==n)
        // printf("%d",s);
        /* code */
    }
     printf("%d",s);
}