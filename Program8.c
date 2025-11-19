/*
   Step 1 : Understand The Problem Statement
   Step 2 : Write The Algorithum
   Step 3 : Deside th eprogramming Lnaguage
   Step 4 : Write The program
   Step 5 : Test the program

*/

/*
   Alogorithum

   START
       Accept First Number as NO1
       Accept First Number as NO2
       Perform Addition of NO1 & NO2
       Display the addition on Screen

   STOP
*/

#include<stdio.h>

int AdditionTwoNumbers(float fNo1 , float fNo2)
{
    float fSum = 0;
    fSum= fNo1 + fNo2; //business logic
    return fSum;
}

int main()
{
    float fValue1 = 0.0f , fValue2 = 0.0f , fRet = 0.0f;

    printf("Enter first number :\n");
    scanf("%f",&fValue1);

    printf("Enter Second number :\n");
    scanf("%f",&fValue2);

    fRet = AdditionTwoNumbers(fValue1,fValue2);

    printf("Addition is : %f\n",fRet);

    return 0;
}
