#include<stdio.h>

int main()
{
    char Arr[50] = {'\0'}, cValue = '\0';
    int iRet = 0;

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    //problem due to flush
    printf("Enter character : \n");
    scanf("%c",&cValue);

    return 0;
}