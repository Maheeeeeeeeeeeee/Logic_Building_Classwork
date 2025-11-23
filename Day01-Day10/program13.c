/*
    START
        Accept number and store as no
        Divide no by 2
        If the remainder is zero
            then display as even in boolean
        Otherwise 
            display as odd in boolean
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

bool CheckEvenOdd(int iNo)                      //Function Input
{
    int iRem = 0;                               //To store result in int
    iRem = iNo % 2;                             //Business Logic

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
    int iValue = 0;                             //To accept user input
    bool bRet = false;                          //To store and print function output  


    printf("Enter a number : ");
    scanf("%d", &iValue);

    bRet = CheckEvenOdd(iValue);                //Function Call

    printf("Result is : %d\n", bRet);

    return 0;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Testcases Successfully Handled by the application
//      
//      Input: 2            Output: 1
//      Input: 3            Output: 0
//      Input: 218          Output: 1
//      Input: 1029         Output: 0
//      Input: 1100         Output: 1
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////
