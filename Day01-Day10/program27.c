/*
    START
            Accept user input for frequency of output in iCount
            Check for invalid input using if    
            Create a for loop to display the frequent output
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
//      Function Name:  Display
//      Description:    It is used to display the frequent output
//      Input:          Int
//      Output:         Int, String
//      Author:         Mahesh Dhanyakumar Boke
//      Date:           09/10/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Display(int iFrequency)                        //Function Input
{
    int iCnt = 0;                                   //To store result in Int

    if (iFrequency < 0)                             //Checker
    {
        printf("Invalid Input\n");
        return;
    }
    
    for (iCnt = 1; iCnt <= iFrequency; iCnt++)      //Loop 
    {
        printf("Jay Ganesh...\n");
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Entry Point Function of the Applicaiton
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iCount = 0;                                 //To accept user input
    
    printf("Enter the frequency\n");
    scanf("%d", &iCount);

    Display(iCount);                                //Function Call

    return 0;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Test Cases Successfully Handled by the application
//      
//      Input: 4            
//      Output: Jay Ganesh...
//              Jay Ganesh...
//              Jay Ganesh...
//              Jay Ganesh...
//
//      Input: -1            
//      Output: Invalid Input
/////////////////////////////////////////////////////////////////////////////////////////////////////////////
