#include<stdio.h>

void DisplayFactors(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)     //updater
    {
        iNo = -iNo;
    }

    printf("Factors of number %d is : \n",iNo);
    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            printf("Factor is : %d \n",iCnt);
        }
        else
        {
            printf("Non Factor is : %d \n",iCnt);
        }
    }
}

int main()
{
    int iValue = 0;
    printf("Enter number : \n");
    scanf("%d",&iValue);

    DisplayFactors(iValue);

    return 0;
}