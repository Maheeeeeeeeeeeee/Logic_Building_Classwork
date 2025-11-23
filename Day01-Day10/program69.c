#include<stdio.h>


int CountDigits(int iNo)
{
    int iCount = 0;

    while (iNo != 0)
    {
        iNo = iNo/10;
        iCount++;
    }

    return iCount;

}

int main()
{

    int iValue = 0;
    int iRet = 0;

    printf("Enter the number : \n");
    scanf("%d", &iValue);


    iRet = CountDigits(iValue);

    printf("Total Number of Digits are : %d", iRet);

    return 0;
}