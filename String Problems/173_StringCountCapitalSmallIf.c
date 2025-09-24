#include<stdio.h>

void countCapitalSmall(char *str)
{
    int iCountCap = 0, iCountSmall = 0;
    
    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            iCountCap++;
        }
        if((*str >= 'a') && (*str <= 'z'))
        {
            iCountSmall++;
        }
        str++;
    }

    printf("Number of capital characters : %d\n",iCountCap);
    printf("Number of small characters : %d\n",iCountSmall);
}

int main()
{
    char Arr[50] = {'\0'};
    int iRet = 0;

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    countCapitalSmall(Arr);

    return 0;
}