///////////////////////////////////////////////////////////////////////////////
//
//  File name :         Assignment1_3.c
//  Description:        Program to print 5 to 1 numbers on screen
//  Author :           Mayuresh Kiran Chandratre
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

int Display()
{
    int i = 5;
    while(i >= 1)
    {
        printf("%d\n",i);
        i--;
    }
}

int main()
{
    Display();

    return 0;
}