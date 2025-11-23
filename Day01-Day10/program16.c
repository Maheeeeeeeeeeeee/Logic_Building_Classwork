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
// Required Header Files
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>                                               //For Input Output
#include<stdbool.h>                                             //For bool datatype

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name:   CheckEvenOdd
// Description:     It is used to check even odd
// Input:           Integer
// Output:          Boolean
// Author:          Mahesh Dhanyakumar Boke
// Date:            10/10/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

bool CheckEvenOdd(int iNo)                                  //Function Input
{
    int iRem = 0;                                           //Local Variable to store remainder after division             
    iRem = iNo % 2;                                         // Perform modulus to check divisibility by 2

    if(iRem == 0)                                           
    {   return true;    }
    else
    {   return false;   }
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Entry Point Function of the Applicaiton
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;                                         //To accept User Input
    bool bRet = false;                                      //To store Output

    printf("Enter a number : ");
    scanf("%d", &iValue);

    bRet = CheckEvenOdd(iValue);                            //Function Call

    if(bRet == true)
    {   printf("%d is even number\n", iValue);  }
    else
    {   printf("%d is odd number\n", iValue);   }
 
    return 0;
}