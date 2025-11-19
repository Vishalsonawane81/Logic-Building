#include<stdio.h>
#include<stdbool.h>

bool CheckEvent(int iNo)
{
    return ((iNo % 2) == 0);
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter Number :");
    scanf("%d",&iValue);
    
    bRet = CheckEvent(iValue);

    if(bRet == true)
    {
        printf("%d is Even Number");
    }
    else
    {
        printf("%d is odd Number");
    }

    printf("Result is : %d\n",bRet);

    return 0;
}