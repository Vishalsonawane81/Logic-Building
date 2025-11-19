#include<stdio.h>

void CheckEvent(int iNo)
{
    int iRem = 0;
    iRem = iNo % 2;
    if (iRem == 0)
    {
        printf("it is even number");
    }
    else 
    {
        printf("it id odd number");
    }
}
int main()
{
    int iValue = 0;
    printf("Enter Number");
    scanf("%d,&iValue");
    

    return 0;
}