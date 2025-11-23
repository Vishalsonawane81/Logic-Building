//iteration

#include<stdio.h>

int SumDigit(int iNo) //7+2+1
{
   int iSum = 0;
   int iDigit = 0;

  while(iNo != 0)  //721
  {
    iDigit = iNo % 10 ;
    iNo = iNo / 10 ;
    iSum = iSum + iDigit;
  }
   return iSum;
}

int main()
{
  int iValue = 0;
  int iRet = 0;

  printf("Enter number : \n");
  scanf("%d",&iValue);

  iRet = SumDigit(iValue);

  printf("Sum of Digit : %d\n",iRet);

  return 0 ;
}
