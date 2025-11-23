/*

    Algorithm

    START
            Accept user input as iNo
            Add an updater
            Create a for loop for counting factors
            Display the number of factors on the screen
    STOP

*/

//////////////////////////////////////////////s////////////////////////////////////////////////////////////////
//
//      Required Header Files
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function Name:  CountFactors
//      Description:    It is used to count the number of factors of a number
//      Input:          Int
//      Output:         Int
//      Author:         Mahesh Dhanyakumar Boke
//      Date:           09/10/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

int CountFactors(int iNo)                               //Input
{
    int iCnt = 0;
    int iFrequency = 0;                                 //To store output

    if(iNo < 0)                                         //Updater
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= (iNo/2); iCnt++)              //Business Logic
    {
        if((iNo % iCnt) == 0)
        {
            iFrequency++;
        }
    }
    return iFrequency;

}   //End of CountFactors
int main()
{
    int iValue = 0;                                     //To accept user input
    int iRet = 0;                                       //To store the result

    printf("Enter the number : ");
    scanf("%d", &iValue);

    iRet = CountFactors(iValue);                        //Function Call

    printf("Numbers of factors are %d\n", iRet);

    return 0;

}   //End of main

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Testcases Successfully Handled by the application
//      
//      Input:  8                   Output: 3
//      Input:  32                  Output: 5
//      Input:  128                 Output: 7
//      Input:  265                 Output: 8
//      Input:  512                 Output: 9
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////
