#include<stdio.h>
#include<stdbool.h>

bool CheckDivisible(int ino1, int ino2)
{
    if((ino1 % ino2) == 0)
    {
        return true;
    }   
    else
    {
        return false;
    }
}

int main()
{
    int iNo1 = 0;
    int iNo2 = 0;

    bool bRet  = false;


    printf("Enter first number : ");
    scanf("%d", &iNo1);

    printf("Enter Second number : ");
    scanf("%d", &iNo2);

    bRet = CheckDivisible(iNo1,iNo2);

    if(bRet == true)
    {
        printf("first number is divisible by second number");
    }

    else
    {
        printf("Not divisible");
    }

    return 0;
}