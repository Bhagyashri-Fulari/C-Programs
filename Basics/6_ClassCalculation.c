/*
    Start
        Accept percentage from user
            if percentage is less than 0 and greater than 100
                Display it as invalid input
            if percentage is greater than 0 and less than 35 
                Display it as fail
            if percentage is greater than 35 and less than 50 
                Display it as pass class
            if percentage is greater than 50 and less than 60 
                Display it as second class
            if percentage is greater than 60 and less than 70 
                Display it as first class
            if percentage is greater than 70 and less than 100 
                Display it as first class with distinction
    Stop
*/ 

#include<stdio.h>

void DisplayClass(float fPer)
{
    if((fPer < 0.0f) || (fPer > 100.0f))
    {
        printf("Unable to proceed as input in invalid!!\n");
        return;
    }

    if((fPer >= 0.0f) && (fPer < 35.0f))
    {
        printf("You are Fail\n");
    }

    else if((fPer >= 35.0f) && (fPer <50.0))
    {
        printf("Pass class\n");
    }

    else if((fPer >= 50.0f) && (fPer <60.0))
    {
        printf("Second class\n");
    }   

    else if((fPer >= 60.0f) && (fPer <70.0))
    {
        printf("First class\n");
    }
    else if((fPer >= 70.0f) && (fPer <= 100.0))
    {
        printf("First class with distinction\n");
    }
}

int main()
{
    float fValue = 0.0f;

    printf("Please enter your percentage : \n");
    scanf("%f",&fValue);

    DisplayClass(fValue);

    return 0;
}