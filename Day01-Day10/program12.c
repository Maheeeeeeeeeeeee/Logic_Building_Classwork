/*
    START
        Accept number and store as iValue
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

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function Name:  CheckEvenOdd
//      Description:    It is used to check even odd number
//      Input:          Int
//      Output:         Int, String
//      Author:         Mahesh Dhanyakumar Boke
//      Date:           09/10/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////


void CheckEvenOdd(int iNo)                      //Input
{
    int iRem = 0;                               //To store result in int
    iRem = iNo % 2;                             //Business Logic
    if(iRem == 0)
    {
        printf("It is even number");
    }
    else
    {
        printf("It is Odd number");
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

    printf("Enter a number : ");
    scanf("%d", &iValue);

    CheckEvenOdd(iValue);                       //Function Call


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
