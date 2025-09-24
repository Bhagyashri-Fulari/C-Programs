#include<stdio.h>

// Input : deRm2dfr
// char : R
// Output : 2 (correct)

// Input : Demo@23@re
// char : @
// Output : 2 (correct)

//case insensitive
int CharFrequency(char *str, char ch)
{
    int iCount = 0;
    int iDisplacement = 0;

    if((ch >= 'A') && (ch <='Z'))
    {
        iDisplacement = 32;
    }
    else if((ch >= 'a') && (ch <='z'))
    {
        iDisplacement = -32;
    }
    else
    {
        iDisplacement = 0;
    }

    while(*str != '\0')
    {
        if((*str == ch) || (*str == (ch + iDisplacement)))
        {
            iCount++;
        }
        str++;
    }

    return iCount;
}

int main()
{
    char Arr[50] = {'\0'}, cValue = '\0';
    int iRet = 0;

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    printf("Enter character : \n");
    scanf(" %c",&cValue); 

    iRet = CharFrequency(Arr, cValue);

    printf("Frequency of character %c is %d\n",cValue , iRet);

    return 0;
}