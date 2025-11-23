// *    *   *   *   *
#include<stdio.h>

void Display()
{
    /*
    int iCnt = 0;
    iCnt = 1;
    
    while(iCnt<=5)
    {
    printf("%d\t", iCnt);
    iCnt++;
    }
    */

    int iCnt = 0;

    for(iCnt=1; iCnt<=5;iCnt++)
    {
    printf("*\t", iCnt);
    }

}
int main()
{
    Display();

    return 0;
}