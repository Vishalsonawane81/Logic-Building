#include<stdio.h>
#include<stdlib.h> //  for malloc and free

int Summation(int Arr[],int iSize)
{
    int iCnt = 0,isum = 0;

    for(iCnt = 0; iCnt < iSize ; iCnt++)
    {
        isum = isum + Arr[iCnt];
    }
    return isum;
}

int main()
{
    int iLength = 0,iCnt = 0,iRet = 0;
    int * ptr = NULL;

    printf("Enter Number of Elements :");
    scanf("%d",&iLength);   //5

    ptr = (int *)malloc(iLength * sizeof(int));  //5 * 4  //int * 4,4,4,4,4

    if(NULL == ptr) //Industial way of codeing
    {
        printf("Unable to Allocate the memmory\n");
        return -1;
    }

    printf("Enter the Elements :\n");
    for(iCnt = 0; iCnt < iLength;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }
    
    iRet = Summation(ptr,iLength);

    printf("Addition is : %d\n",iRet);

    free(ptr);
   
    return 0;
}
