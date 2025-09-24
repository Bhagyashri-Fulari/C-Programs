#include<stdio.h>

int Summation(int iNo)
{
    int iResult = 0,iCnt = 0;

    for(iCnt = 1;iCnt <= iNo;iCnt++)
    {
        iResult += iCnt;
    }

    return iResult;
}

int main()
{
    int iValue = 0,iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = Summation(iValue);

    printf("Summation is : %d\n",iRet);

    return 0;
}