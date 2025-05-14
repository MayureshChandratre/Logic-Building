///////////////////////////////////////////////////////////////////////////////
//
//  File name :         Assignment2_3.c
//  Description:        Program to accept number from user and display
//  Author :            Mayuresh Kiran Chandrate
//  Date:               11/05/2025
//
///////////////////////////////////////////////////////////////////////////////

/*
    Start
        Create one Divide function which accepts two parameters
        Write Division logic
        Store value in variable
        Return the value to the main function
        Display the output
    Stop
*/

#include<stdio.h>

void Display(int iNo,int iFrequency)
{
    int iCnt = 0;
    for(iCnt = 1;iCnt <= iFrequency; iCnt++)
    {
        printf("%d \t",iNo);
    }
}

int main()
{
    int iValue = 0;
    int iCount = 0;

    printf("Enter Number :\n");
    scanf("%d",&iValue);

    printf("Enter Frequency :\n");
    scanf("%d",&iCount);

    Display(iValue,iCount);

    return 0;
}