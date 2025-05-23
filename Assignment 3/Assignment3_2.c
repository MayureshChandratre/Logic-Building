///////////////////////////////////////////////////////////////////////////////
//
//  File name :         Assignment3_2.c
//  Description:        Program to print even factors of a number
//  Author :            Mayuresh Kiran Chandratre
//  Date:               11/05/2025
//
///////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void DisplayFactor(int iNo)
{
    int i = 0;
    
    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    for(i =1; i <= iNo; i++)
    {
        if((iNo % i) == 0)
        {

            if ((i % 2) == 0)
            {
                printf("%d \t",i);
            }
        }    
    }
}

int main()
{
    int iValue = 0;
    printf("Enter a number : \n");
    scanf("%d",&iValue);

    DisplayFactor(iValue);

    return 0;
}