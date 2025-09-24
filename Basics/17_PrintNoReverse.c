#include<stdio.h> 

//Iteration

void Display(int iVal)
{
    int iCnt = 0;
    
    for(iCnt = iVal;iCnt >= 1;iCnt--)
    {
        printf("%d\n",iCnt);
    }
}

int main()
{
    int iValue = 0;
    printf("Enter the frequency : ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}