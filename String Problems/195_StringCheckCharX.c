#include<stdio.h>
#include<stdbool.h>

bool checkCharacter(char *str, char ch)
{
    while(*str != '\0')
    {
        if(*str == ch)
        {
            break;
        }
        str++;
    }

    return (*str == ch);
}

int main()
{
    char Arr[50] = {'\0'}, cValue = '\0';
    bool bRet = false;

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    printf("Enter character : \n");
    scanf(" %c",&cValue); 

    bRet = checkCharacter(Arr, cValue);

    if(bRet == true)
    {
        printf("%c is present in %s \n", cValue, Arr);
    }
    else
    {
        printf("%c is not present in %s \n", cValue, Arr);
    }

    return 0;
}