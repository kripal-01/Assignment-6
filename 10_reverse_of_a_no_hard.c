// 10. Write a program to reverse a given number
#include<stdio.h>
int main()
{
    int n,r,s=0;
    printf("enter n   ");
    scanf("%d",&n);
    while(n!=0)
    {
     s=(s*10)+(n%10);
     n/=10;
    }
    
    printf("%d",s);
    
    /* code */
    return 0;
}
