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
//      Description:    It is used to check if a number is prime or not
//      Input:          Int
//      Output:         Int
//      Author:         Mahesh Dhanyakumar Boke
//      Date:           16/10/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

int CheckPrime(int iNo)                                             //Input
{
    int iCnt = 0;                                                   //To store output

    if(iNo < 0)                                                     //Updater
    {       
        iNo = -iNo;
    }   

    for(iCnt = 2; iCnt <= (iNo/2); iCnt++)                          //Business Logic
    {
        if((iNo % iCnt) == 0)
        {
            break;                                                  //Optimization
        }
    }

    if (iCnt <= iNo/2)
    {
        return false;
    }
    else{
        return true;
    }

/*
    if (iCnt > iNo/2)
    {
        return true;
    }
    else{
        return false;
    }
*/
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Entry point function for the application
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;                                                 //To ac
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


/*  Time Complexity :   For prime - N/2
                        For non prime - either 1 or 2;
*/


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






