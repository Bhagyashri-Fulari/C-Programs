#include<stdio.h>

void strrevX(char *str)
{
    char *start = NULL , *End = NULL;
    char temp = '\0';

    start = str;
    End = str;

    while(*End != '\0')
    {
        End++;
    }

    End--;

    while(start < End)
    {
        temp = *start;
        *start = *End;
        *End = temp;

        start++;
        End--;
    }

}

int main()
{
    char Arr[50] = {'\0'};
    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    strrevX(Arr);

    printf("String after reversal : %s",Arr);

    return 0;
}

//Time Complexity : O (n+n/2)