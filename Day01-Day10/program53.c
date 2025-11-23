/*

    Algorithm

    START
            Accept user input
            Add an updater

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
//      Function Name:  CountFactorsNonFactors
//      Description:    It is used count number of factor and non-factors of a number
//      Input:          Int
//      Output:         Int
//      Author:         Mahesh Dhanyakumar Boke
//      Date:           16/10/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

void CountFactorsNonFactors(int iNo)                            //Input
{
    int iCnt = 0;
    int iFrequency1 = 0;                                        //To store Output1
    int iFrequency2 = 0;                                        //To store Output2

    if(iNo < 0)                                                 //Updater
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt < iNo; iCnt++)                           //Business Logic
    {
        if((iNo % iCnt) == 0)
        {
            iFrequency1++;
        }
        else 
        {
            iFrequency2++;
        }
    }

    printf("Number of factors are : %d\n", iFrequency1);       //Display Output1

    printf("Number of non factors are : %d\n", iFrequency2);   //Display Output2
    
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Entry point function for the application
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;                                             //To aceept user Input 

    printf("Enter the number : \n");
    scanf("%d", &iValue);

    CountFactorsNonFactors(iValue);                             //Function Call

    return 0;
}   //End of main

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Testcases Successfully Handled by the application
//      
//      Input:  8           Output: 3, 4
//      Input:  16          Output: 4, 11
//      Input:  32          Output: 5, 26
//      Input:  64          Output: 6, 57
//      Input:  126         Output: 7, 120
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////