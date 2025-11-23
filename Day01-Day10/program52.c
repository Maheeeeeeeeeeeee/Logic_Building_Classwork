/*

    Algorithm

    START
            Accept User Input
            Add an updater
            Create a for loop to count non-factors
            Display the number of non-factors
    STOP

*/

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Required Header Files
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function Name:  CountNonFactors
//      Description:    It is used count the number of Non-factors of a number
//      Input:          Int
//      Output:         Int
//      Author:         Mahesh Dhanyakumar Boke
//      Date:           
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

int CountNonFactors(int iNo)                                //Input
{
    int iCnt = 0;
    int iFrequency = 0;                                     //To store output

    if(iNo < 0)                                             //Updater
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt < iNo; iCnt++)                       //Busines Logic
    {
        if((iNo % iCnt) != 0)
        {
            iFrequency++;
        }
    }
    return iFrequency;
}   //End of CountNonFactors

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Entry point function for the application
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{   
    int iValue = 0;                                         //To accept user input
    int iRet = 0;                                           //To store the result   

    printf("Enter the number : ");
    scanf("%d", &iValue);

    iRet = CountNonFactors(iValue);                         //Function Call

    printf("Numbers of non factors are %d\n", iRet);

    return 0;
}   //End of main

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Testcases Successfully Handled by the application
//      
//      Input:  8               Output: 4
//      Input:  16              Output: 11 
//      Input:  32              Output: 26
//      Input:  64              Output: 57
//      Input:  128             Output: 120
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////