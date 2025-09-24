#include<stdio.h> 

//Iteration

void Display(int iVal)
{
    int iCnt = 0;
    
    for(iCnt = 1;iCnt <= 5;iCnt++)
    {
        printf("%d\n",iVal);
    }
}

int main()
{
    int iValue = 0;
    printf("Enter value that you want to print : ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}