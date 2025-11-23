// 1    2   3   4   5   
#include<stdio.h>

void Display()
{
    /*
    printf("1\t");
    printf("2\t");
    printf("3\t");
    printf("4\t");
    printf("5\t");
    */

    int iCnt = 0;

    for(iCnt=1; iCnt<=5;iCnt++)
    {
    printf("%d\t", iCnt);
    }
}
int main()
{
    Display();

    return 0;
}