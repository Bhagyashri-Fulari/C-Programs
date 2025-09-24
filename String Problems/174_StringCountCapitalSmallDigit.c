#include<stdio.h>

void countCapitalSmallDigit(char *str)
{
    int iCountCap = 0, iCountSmall = 0, iCountDigit = 0;
    
    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            iCountCap++;
        }
        else if((*str >= 'a') && (*str <= 'z'))
        {
            iCountSmall++;
        }
        else if((*str >= '0') && (*str <= '9'))
        {
            iCountDigit++;
        }
        str++;
    }

    printf("Number of capital characters : %d\n",iCountCap);
    printf("Number of small characters : %d\n",iCountSmall);
    printf("Number of Digits : %d\n",iCountDigit);
}

int main()
{
    char Arr[50] = {'\0'};
    int iRet = 0;

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    countCapitalSmallDigit(Arr);

    return 0;
}