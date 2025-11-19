/////////////////////////////////////////////////////////////
//
// Required Hader file
//
//
/////////////////////////////////////////////////////////////
 
#include<stdio.h>                       //for input,output
#include<stdbool.h>                     //for bool data type


/////////////////////////////////////////////////////////////
//
// Function name :    CheckEvent
// Description :      It is used to check even or odd
// Input :            Integer
// Output :           boolen
// Auther             Vishal Shrikant Sonawane
// Date :             10/10/2025
//
/////////////////////////////////////////////////////////////

bool CheckEvent(int iNo)
{
    int iRem = 0;

    iRem = iNo % 2;

    if (iRem == 0)
    {   return true; }
    else 
    {  return false; }
}

//////////////////////////////////////////////////////////////
//
//
//Entry point function of the Application
//
//
//////////////////////////////////////////////////////////////

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