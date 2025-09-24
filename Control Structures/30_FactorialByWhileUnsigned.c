#include<stdio.h>
#define ERR_INVALID -1

unsigned long int Factorial(unsigned int iNo)
{
    unsigned long int iFact = 1;
    int iCnt = 0;

    if(iNo < 0)
    {
        return ERR_INVALID;
    }

    iCnt = 1;
    while(iCnt <= iNo)
    {
        iFact *= iCnt;
        iCnt++;
    }
    
    return iFact;
}

int main()
{
    unsigned int iValue = 0;
    unsigned long int iRet = 0;

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