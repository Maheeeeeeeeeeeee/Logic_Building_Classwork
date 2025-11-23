#include<stdio.h>

void Display(int iFrequency)                        //Inlcuded the frequnecy of output based on user input
{
    int iCnt = 0;

    for (iCnt = 1; iCnt <= iFrequency; iCnt++)
    {
        printf("Jay Ganesh...");
    }
}

int main()
{
    int iCount = 0;
    
    printf("Enter the frequency\n");                //Accepting User Input
    scanf("%d", &iCount);

    Display(iCount);
    return 0;
}