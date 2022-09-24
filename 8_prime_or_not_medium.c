// 8. Write a program to check whether a given number is a Prime number or
// not
// #include<stdio.h>
// int main()
// {
//     int n,i;
//     printf("enetr no.");
//     scanf("%d",&n);
//     for(i=2;i<=n/2;i++)
//     {
//         if (n%i==0)
//         {
//             printf("no. is not prime");
//             break;
//             /* code */
//         }  
        
      
//     }
//     if(n%i!=0)
//     printf("no. is  prime");
    
//     /* code */
//     return 0;
// }


// or

#include<stdio.h>
int main()
{
    int n,i,flag=0;
    printf("enetr no.");
    scanf("%d",&n);
    for(i=2;i< n;i++)
    {
        if (n%i==0)
        {
            flag=1;
            break;
            /* code */
        }  
        
      
    }
    if(flag==1)
    printf("no. is not prime");
    else
    printf("no. is  prime");
    
    /* code */
    return 0;
}
