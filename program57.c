#include<stdbool.h>
#include<stdio.h>

bool CheckPrime(int iNo)
{
    int iCnt = 0 ;
    bool bFlag = true;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

 for(iCnt = 2; iCnt <= (iNo / 2); iCnt++)
 {
    if((iNo % iCnt) == 0)
    {
        bFlag = false;
        break;             //optimaization
    }   
 }
    return bFlag;
}

 // Time Complexity : O(N/2)

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    bRet = CheckPrime(iValue);
    if(bRet == true)
    {
        printf("%d is a prime number\n",iValue);
    }
    else
    {
        printf("%d is a prime number\n",iValue);
    }

    return 0;
}
 /*
 time complaxity : For Prime :- N/2
 time complaxity : For Non Prime :- 1 or 2
 */