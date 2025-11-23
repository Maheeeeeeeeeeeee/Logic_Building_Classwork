/*

    Algorithm

    START
            Display "Jay Ganesh..."
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
//      Function Name:  CheckPrime
//      Description:    It is used to check if number is prime or not 
//      Input:          Int
//      Output:         Boolean
//      Author:         Mahesh Dhanyakumar Boke
//      Date:           16/10/25
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

int CheckPrime(int iNo)
{
    int iCnt = 0;
    bool bFlag = false;

    if(iNo < 0)
    {
        iNo = -iNo;
    }   
    
    for(iCnt = 2, bFlag = true; iCnt <= (iNo/2); iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            bFlag = false;
            break;                                                 //Optimization
        }
    }
    return bFlag;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Entry point function for the application
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////


int main()
{
    int iValue = 0; 
    bool bRet = false;

    printf("Enter the number : \n");
    scanf("%d", &iValue);

    bRet = CheckPrime(iValue);

    if(bRet == true)
    {
        printf("%d is a prime number\n",iValue);
    }
    else
    {
        printf("%d is not a prime number\n",iValue);
    }
    return 0;
}   //End of main



//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Testcases Successfully Handled by the application
//      
//      Input: 8                Output: 8 is not a prime number 
//      Input: 13               Output: 13 is a prime number
//      Input: 113              Output: 113 is a prime number
//      Input: 128              Output: 128 is not a prime number
//      Input: 1013             Output: 1013 is a prime number
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////





