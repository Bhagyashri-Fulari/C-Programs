//////////////////////////////////////////////////////
//
//  file name : Program19.c
//  Author : Bhagyashri Babasaheb Fulari
//  Description : Program to check number is even or odd
//  Date : 11/05/2025
//
//////////////////////////////////////////////////////

/*
    Start
        Take number as input from user
        divide number by 0
            if remainder is 0
                number is even
            otherwise
                number is odd
    Stop
*/

#include<stdio.h>
#include<stdbool.h>

bool CheckEven(int iNo)
{
    if((iNo % 2) == 0)
    {
        return true;
    }
    else 
    {
        return false;
    }
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter number to check whether it is even or odd : ");
    scanf("%d",&iValue);

    bRet = CheckEven(iValue);

    if(bRet == true)
    {
        printf("%d is even number.\n",iValue);
    }
    else
    {
        printf("%d is odd number.\n",iValue);
    }

    return 0;
}