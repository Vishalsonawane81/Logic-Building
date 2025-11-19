#include<stdio.h>
#include<stdbool.h>

bool CheckEvent(int iNo)
{
    int iRet = 0;

    iRet = iNo % 2;

    if (iRet == 0)
    {
         return true;
    }
    else 
    {
       return false;
    }
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