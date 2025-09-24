#include<stdio.h>

int Factorial(int iNo)
{
    int iFact = 1,iCnt = 0;

    for(iCnt = 1;iCnt <= iNo;iCnt++)
    {
        iFact *= iCnt;
    }

    return iFact;
}

int main()
{
    int iValue = 0,iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);

    printf("Factorial is : %d\n",iRet);
    

    return 0;
}