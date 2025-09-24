#include<stdio.h>

int countSpace(char *str)
{
    int iCountSpace = 0;
    
    while(*str != '\0')
    {
        if(*str == ' ')
        {
            iCountSpace++;
        }
        str++;
    }
    return iCountSpace;
}

int main()
{
    char Arr[50] = {'\0'};
    int iRet = 0;

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    iRet = countSpace(Arr);

    printf("Number of characters are : %d\n",iRet);

    return 0;
}