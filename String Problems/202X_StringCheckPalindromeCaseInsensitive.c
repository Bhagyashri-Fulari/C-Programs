#include<stdio.h>
#include<stdbool.h>

//case insensitive
bool CheckPalindrom(char *str)
{
    char *start = NULL;
    char *end = NULL;
    bool bFlag = true;

    start = str;
    end = str;

    while(*end != '\0')
    {
        end++;
    }

    end--;

    while(start < end)
    {
        if((*start >= 'A') && (*start <= 'Z'))
        {
            *start = *start + 32;
        }
        if((*end >= 'A') && (*end <= 'Z'))
        {
            *end = *end + 32;
        }

        if(*start != *end)
        {
            bFlag = false;
            break;
        }
        str++;
        start++;
        end--;
    }

    return bFlag;
}

int main()
{
    char Arr[50] = {'\0'};
    bool bRet = false;

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    bRet = CheckPalindrom(Arr);

    if(bRet == true)
    {
        printf("String is palindrome\n");
    }
    else
    {
        printf("String is not a palindrom\n");
    }

    printf("String after processing : %s",Arr);

    return 0;
}