/*
    START
        Accept number and store as no
        Divide no by 2
        If the remainder is zero
            then display as even
        Otherwise 
            display as odd
    STOP
*/

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Required Header Files
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function Name:  CheckEvenOdd
//      Description:    It is used to check even odd number
//      Input:          Int
//      Output:         Boolean
//      Author:         Mahesh Dhanyakumar Boke
//      Date:           09/10/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

bool CheckEvenOdd(int iNo)                          //Input
{
    int iRem = 0;                                   //To store result 
    iRem = iNo % 2;                                 //Business Logic

    if(iRem == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Entry point function for the application
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;                                 //To accept user input
    bool bRet = false;


    printf("Enter a number : ");
    scanf("%d", &iValue);

    bRet = CheckEvenOdd(iValue);                    //Function Call

    if(bRet == true)                                //
    {
        printf("%d is even number\n", iValue);
    }
    else
    {
        printf("%d is odd number\n", iValue);
    }

    return 0;
}


//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Testcases Successfully Handled by the application
//      
//      Input: 2            Output: It is even number
//      Input: 3            Output: It is odd number
//      Input: 218          Output: It is even number
//      Input: 1029         Output: It is odd number
//      Input: 1100         Output: It is even number
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////
