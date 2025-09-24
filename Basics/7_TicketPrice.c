#include<stdio.h>

int TicketPrice(int iAgeVal)
{
    if(iAgeVal < 0)
    {
        return -1;
    }
    else if((iAgeVal >= 0) && (iAgeVal <= 5))
    {
        return 0;
    }
    else if((iAgeVal >= 6) && (iAgeVal <= 18))
    {
        return 700;
    }
    else if((iAgeVal >= 19) && (iAgeVal <= 50))
    {
        return 999;
    }
    else if(iAgeVal >=51)
    {
        return 500;
    }
}

int main()
{
    int iAge = 0 , iprice = 0;

    printf("Enter your age : \n");
    scanf("%d",&iAge);

    iprice = TicketPrice(iAge);

    if(iprice == -1)
    {
        printf("You entered invalid age \n");
    }
    else
    {
        printf("Your Ticket Price is : %d\n",iprice);
    }

    return 0;
}