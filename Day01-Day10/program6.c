#include<stdio.h>

int Add(int a, int b)
{
    int sum = 0;
    sum = a + b;                        //Business Logic
    return sum;
}

int main()
{
    int i = 0;
    int j = 0; 
    int ans = 0;

    printf("Enter first value: \n");
    scanf("%d", &i);
    
    printf("Enter second value: \n");
    scanf("%d", &j);

    ans = Add(i,j);

    printf("Addition is = %d\n",ans);

    return 0;
}