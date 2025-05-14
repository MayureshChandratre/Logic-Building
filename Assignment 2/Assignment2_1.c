///////////////////////////////////////////////////////////////////////////////
//
//  File name :         Assignment2_2.c
//  Description:        Program to accept number from user and print number of * on screen
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

void Display(int iNo)
{
    int iCnt = 0;
    while(iCnt< iNo)
    {
        printf("*");
        iCnt++;
    }
    
}

int main()
{
    int iValue = 0;

    printf("Enter a Number : \n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}