#include<stdio.h>
#include<stdlib.h>

float Average(int Arr[], int iSize)
{
    int iCnt = 0, iSum = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)                 //Condition problem solved
    {
        iSum = (iSum + Arr[iCnt]);                //Issue
    }

    return ((float)iSum/(float)iSize);
}

int main()
{
    int iLength = 0, iCnt = 0, iRet = 0;
    int *ptr = NULL;

    printf("Enter number of element : ");
    scanf("%d", &iLength);                              //5

    ptr = (int *)malloc(iLength * sizeof(int));    
    if(NULL == ptr)                                     //Generates error during compile time
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter the elements : \n");
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    iRet = Average(ptr,iLength);

    printf("Average of entered elements is : %d\n", iRet);
    free(ptr);

    return 0;
}