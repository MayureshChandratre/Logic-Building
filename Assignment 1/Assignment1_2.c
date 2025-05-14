///////////////////////////////////////////////////////////////////////////////
//
//  File name :         Assignment1_2.c
//  Description:        Program to print 5 times Marvellous on screen
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

void Display()
{
    int i = 0;
    for(i = 1; i <= 5; i++)
    {
        printf("Marvellous\n");
    }
}

int main()
{
    Display();

    return 0;
}