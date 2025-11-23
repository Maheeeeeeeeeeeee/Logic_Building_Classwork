#include<stdio.h>

int main()
{
    int iNo1 = 0;
    int iNo2 = 0;

    printf("Enter first number : ");
    scanf("%d", &iNo1);

    printf("Enter Second number : ");
    scanf("%d", &iNo2);
   
    if(iNo1 % iNo2 == 0)
    {
        printf("first number is divisible by second number");
    }

    else
    {
        printf("Not divisible");
    }
    return 0;
}