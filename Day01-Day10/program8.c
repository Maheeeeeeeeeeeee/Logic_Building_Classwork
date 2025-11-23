

#include<stdio.h>

float AdditionTwoNumbers(float fNo1, float fNo2)
{
    float fSum = 0.0f;
    fSum = fNo1 + fNo2;                        //Business Logic
    return fSum;
}

int main()
{
    float fValue1 = 0.0f;
    float fValue2 = 0.0f; 
    float fRet = 0.0f;

    printf("Enter first value: \n");
    scanf("%f", &fValue1);
    
    printf("Enter second value: \n");
    scanf("%f", &fValue2);

    fRet = AdditionTwoNumbers(fValue1,fValue2);

    printf("Addition is = %f\n",fRet);

    return 0;
}