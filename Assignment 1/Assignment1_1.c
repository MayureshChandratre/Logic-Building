///////////////////////////////////////////////////////////////////////////////
//
//  File name :         Assignment1_1.c
//  Description:        Program to Divide two numbers
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

int Divide(int iNo1, int iNo2)
{
    int iAns = 0;
    if(iNo2 <= 0)
    {
        return -1;
    }
    iAns = iNo1 / iNo2;
    return iAns;

}

int main()
{
    int iValue1 = 15, iValue2 = 5;
    int iRet = 0;

    iRet = Divide(15,5);
    
    printf("Division is %d \n",iRet);

    return 0;
}