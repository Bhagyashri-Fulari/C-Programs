#include<stdio.h>
#define ERR_INVALID_AGE -1

int TicketPrice(int iAgeVal)
{
    int iPrice = 0;

    if(iAgeVal < 0)
    {
        return ERR_INVALID_AGE;
    }
    
    if((iAgeVal >= 0) && (iAgeVal <= 5))
    {
        iPrice = 0;
    }
    else if((iAgeVal >= 6) && (iAgeVal <= 18))
    {
        iPrice = 700;
    }
    else if((iAgeVal >= 19) && (iAgeVal <= 50))
    {
        iPrice = 999;
    }
    else if(iAgeVal >=51)
    {
        iPrice = 500;
    }

    return iPrice;
}

int main()
{
    int iAge = 0 , iRet = 0;

    printf("Enter your age : \n");
    scanf("%d",&iAge);

    iRet = TicketPrice(iAge);

    if(iRet == ERR_INVALID_AGE)
    {
        printf("You entered invalid age \n");
    }
    else
    {
        printf("Your Ticket Price is : %d\n",iRet);
    }

    return 0;
}