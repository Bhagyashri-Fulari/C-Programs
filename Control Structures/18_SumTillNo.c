#include<stdio.h> 

//Iteration

int Calculate(int iVal)
{
    int iCnt = 0, iSum = 0;
    
    for(iCnt = 1;iCnt <= iVal;iCnt++)
    {
        iSum = iSum + iCnt;
    }
    return iSum;
}

int main()
{
    int iValue = 0, iRet = 0;
    printf("Enter the frequency : ");
    scanf("%d",&iValue);

    iRet = Calculate(iValue);
    printf("Summation is : %d",iRet);

    return 0;
}