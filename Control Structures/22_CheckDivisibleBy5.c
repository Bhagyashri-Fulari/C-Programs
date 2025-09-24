#include<stdio.h>
#include<stdbool.h>

bool CheckDivisible(int iNo)
{
    bool bResult = false;

    if((iNo % 5) == 0)
    {
        bResult = true;
    }
    else 
    {
        bResult = false;
    }
    return bResult;
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter number to check whether it is divisible 5 or not : ");
    scanf("%d",&iValue);

    bRet = CheckDivisible(iValue);

    if(bRet == true)
    {
        printf("%d is divisible by 5.\n",iValue);
    }
    else
    {
        printf("%d is not divisible by 5.\n",iValue);
    }

    return 0;
}