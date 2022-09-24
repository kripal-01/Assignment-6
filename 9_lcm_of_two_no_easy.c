// 9. Write a program to calculate LCM of two numbers
// #include<stdio.h>
// int main()
// {
//     int a,b,i,l;
//     printf("enter a,b : ");
//     scanf("%d %d",&a,&b);
//     if (a>=b)
//     {
//         for ( i = b; i >= 1; i--)
//         {
//             if(a%i==0&&b%i==0){
//             printf("HCF is : %d",i);
//             break;
//             /* code */}

//         }
        
//         /* code */
//     }
//     else
//     {
//          for ( i = a; i >= 1; i--)
//         {
//             if(b%i==0&&a%i==0){
//             printf("HCF is : %d",i);
//             break;
//             /* code */}
//     }
    
//     /* code */
//     return 0;
//     }
//     l = (a*b)/i;
//     printf("lcm is %d",l);
// }

// or

#include<stdio.h>
int main()
{
    int a,b,i,l;
    printf("enter a,b : ");
    scanf("%d %d",&a,&b);
    
    
        for ( i = 1; 1; i++)
        {
           if((i%a==0)&&(i%b==0))
           {
            break;
           }
        }
        printf("lcm is %d",i);
        
        /* code */
   return 0;
}
