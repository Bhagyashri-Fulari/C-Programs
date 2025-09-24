#include<stdio.h>
#define ERR_INVALID -1

unsigned long int Factorial(unsigned int iNo)
{
    unsigned int iFact = 1;
    int iCnt = 0;

    if(iNo < 0)
    {
        return ERR_INVALID;
    }

    for(iCnt = 1;iCnt <= iNo;iCnt++)
    {
        iFact *= iCnt;
    }

    return iFact;
}

int main()
{
    unsigned int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%u",&iValue);  //%u used for unsigned int

    iRet = Factorial(iValue);

    if(iRet == ERR_INVALID)
    {
        printf("Invalid Input\n");
    }
    else
    {
        printf("Factorial is : %lu\n",iRet);
    }

    return 0;
}