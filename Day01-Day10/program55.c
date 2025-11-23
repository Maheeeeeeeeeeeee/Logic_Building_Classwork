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
//      Description:    It is used check if number is prime or not
//      Input:          Int
//      Output:         Int, String
//      Author:         Mahesh Dhanyakumar Boke
//      Date:           16/10/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

int CheckPrime(int iNo)                                             //Input
{
    int iCnt = 0;
    int iFrequency = 0;                                             //To store the output   

    if(iNo < 0)                                                     //Updater
    {
        iNo = -iNo;
    }   

    for(iCnt = 2; iCnt <= (iNo/2); iCnt++)                          //Business Logic
    {
        if((iNo % iCnt) == 0)
        {
            iFrequency++;
            break;                                                  //Optimization
        }
    }

    if (iFrequency == 0)                                            
    {
        return true;
    }
    else{
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
    int iValue = 0;                                                 //To accept user input
    bool bRet = false;                                              //To store the result

    printf("Enter the number : \n");
    scanf("%d", &iValue);

    bRet = CheckPrime(iValue);                                      //Function Call

    if(bRet == true)                                                //Display Output
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
//      Input:  Output: 
//      Input:  Output: 
//      Input:  Output: 
//      Input:  Output: 
//      Input:  Output: 
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////







/*  Time Complexity :   For prime - N/2
                        For non prime - either 1 or 2;
*/