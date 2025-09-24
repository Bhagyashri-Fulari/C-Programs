// Input : 4    #
// Output : #   #   #   #


#include<stdio.h>

void Display(int iNo, char Ch)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    for(iCnt = 1; iCnt <= iNo; iCnt++)   //N
    {
        printf("%c\t",Ch);
    }
    printf("\n");
}

int main()
{
    int iValue = 0;
    char cValue = '\0';

    printf("Enter frequency : \n");
    scanf("%d",&iValue);

    printf("Enter character : \n");
    scanf(" %c",&cValue);        //accepting character due to space before %c

    Display(iValue,cValue);

    return 0;
}

// Time Complexity O(N)
// N is a natural number
//Where N >= 0 and N <= Infinity