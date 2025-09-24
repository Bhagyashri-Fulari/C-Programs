#include<stdio.h>

int strLenX(char *str)
{
    int iCount = 0;
    
    while(*str != '\0')
    {
        iCount++;
        str++;
    }

    return iCount;
}

int main()
{
    char Arr[50] = {'\0'};
    int iRet = 0;

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    iRet = strLenX(Arr);
    printf("Number of characters : %d\n",iRet);

    return 0;
}