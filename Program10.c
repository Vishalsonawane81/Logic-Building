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
       If the input is negative then convert it into positive
       Perform Addition of NO1 & NO2
       Display the addition on Screen

   STOP
*/

///////////////////////////////////////////////////////////
//
//  Requried Heder File
//
///////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////
//
// Function Name : AdditionTwoNumbers
// Description   : It is used to perform addition
// Input         : float , float   
// 
//     
//
///////////////////////////////////////////////////////////

float AdditionTwoNumbers(float fNo1 , float fNo2)
{
    float fSum = 0.0f;
     
    //Updator
    if(fNo1<0.0f)
    {
        fNo1 = -fNo1;
    }

    if(fNo2<0.0f)
    {
        fNo2 = -fNo2;
    }

    fSum= fNo1 + fNo2; //business logic
    return fSum;
}

///////////////////////////////////////////////////////////
//
// Entry Point Function
//
///////////////////////////////////////////////////////////
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

//////////////////////////////////////////////////////////
//
//  Test Cases Succesfully Hnadled by application
//
// Input1 : 10.5     Input2 : 3.2     output : 13.7
// Input1 : -10.5    Input2 : 3.2     output : 13.7
// Input1 : 10.5     Input2 : -3.2    output : 13.7
// Input1 : -10.5    Input2 : 3.2     output : 13.7
// Input1 : 10.5     Input2 : 0.0     output : 10.5
//
//////////////////////////////////////////////////////////
