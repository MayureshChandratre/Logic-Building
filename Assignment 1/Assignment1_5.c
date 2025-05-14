///////////////////////////////////////////////////////////////////////////////
//
//  File name :         Assignment1_5.c
//  Description:        Program to print number of * on screen
//  Author :            Mayuresh Kiran Chandratre
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

void Accept(int iNo)
{
    int iCnt = 0;
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("*");
    }
}
int main()
{
    int iValue = 0;
    iValue = 5;

    Accept(iValue);
    return 0;
}