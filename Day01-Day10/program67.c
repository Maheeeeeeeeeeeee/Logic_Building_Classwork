//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Required Header Files
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function Name:  DisplayDigits
//      Description:    It is used to Display Digits of a number in reverse order 
//      Input:          Int
//      Output:         Int
//      Author:         Mahesh Dhanyakumar Boke
//      Date:           16/10/25
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

void DisplayDigits(int iNo)                                 
{
    int iDigit = 0;                                                 //To store Output

    printf("Original value of iNo is %d\n", iNo);

    while (iNo != 0)                                                //Business Logic
    {
        printf("------------------------------------\n");

        iDigit = iNo % 10;
        printf("iDigit is : %d\n", iDigit);
        iNo = iNo/10;
        printf("iNo is : %d\n", iNo);
    }

    printf("------------------------------------\n");
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Entry point function for the application
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    printf("------------------------------------\n");

    int iValue = 0;                                                 //To accept user input

    printf("------------------------------------\n");

    printf("Enter the number : \n");
    scanf("%d", &iValue);

    printf("------------------------------------\n");

    DisplayDigits(iValue);                                          //Function Call

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




