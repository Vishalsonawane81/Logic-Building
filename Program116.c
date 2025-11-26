#include<stdio.h>

void Display(int *Arr)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt <4; iCnt++)
    {
        printf("%d\n",*(Arr + iCnt));//*(ptr + 0),*(ptr + 1),*(ptr + 2),*(ptr + 3) ptr is Arr here
    }
}

int main()
{
    int Brr[] = {10,20,30,40};

    Display(Brr);//Display 100 first (Arr)address

    return 0;
}
