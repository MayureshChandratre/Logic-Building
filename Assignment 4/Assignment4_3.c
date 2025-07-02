///////////////////////////////////////////////////////////////////////////////
//
//  File name :         Assignment4_3.c
//  Description:        Program to print non-factors of a number
//  Author :            Mayuresh Kiran Chandratre
//  Date:               14/05/2025
//
///////////////////////////////////////////////////////////////////////////////

# include<stdio.h>

void NonFact(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)     // Updator
    {   iNo = -iNo; }

    for(iCnt = 1; iCnt <= iNo ; iCnt++)
    {
        if((iNo % iCnt != 0))
        {
           printf("%d\t",iCnt);
        }
    }
}


int main()
{
    int iValue = 0;
    
    printf("Enter Number :");
    scanf("%d",&iValue);

    NonFact(iValue);

    return 0;
}