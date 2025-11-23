/*

    Algorithm

    START
            Accept User Input
            Add an updater
            Create a for loop to check prime number
            Display if number is prime or not
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
//      Description:    It is used 
//      Input:          Int
//      Output:         Bool, String
//      Author:         Mahesh Dhanyakumar Boke
//      Date:           16/10/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

int CheckPrime(int iNo)                                             //Input
{
    int iCnt = 0;
    int iFrequency = 0;                                             //To store output       

    if(iNo < 0)                                                     //Updater
    {
        iNo = -iNo;
    }   

    for(iCnt = 2; iCnt <= (iNo/2); iCnt++)                          //Business Logic1
    {
        if((iNo % iCnt) == 0)
        {
            iFrequency++;
        }
    }

    if (iFrequency == 0)                                            //Return value
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
    int iValue = 0;                                                 //To accept user Input
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
//      Input:  7       Output: 7 is a prime number
//      Input:  13      Output: 13 is a prime number
//      Input:  128     Output: 128 is not a prime number
//      Input:  113     Output: 113 is a prime number
//      Input:  256     Output: 256 is not a prime number
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////