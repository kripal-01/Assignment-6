// 7. Write a program to count digits in a given number
//#include <stdio.h>
//int main()
//{
//    int n, c = 0;
//    printf("enter no.");
//    scanf("%d", &n);
//    if (n == 0)
//        printf("1 digit");
//    else
//
//    {
//        while (n != 0)
//        {
//            n /= 10;
//            c++;
//        }
//        printf("%d", c);
//    }
//    /* code */
//    return 0;
//}
//



#include<stdio.h>
int main()
{
	int n,i=0;
	scanf("%d",&n);
do
	{
		i++;
		n/=10;
	}	while(n);
	printf("%d",i);
}
