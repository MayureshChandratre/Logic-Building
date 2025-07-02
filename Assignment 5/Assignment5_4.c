/////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :         Assignment5_4.c
//  Description:        Program to accept number from user and print odd numbers till that number
//  Author :            Mayuresh Kiran Chandratre
//  Date:               14/05/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////

# include <stdio.h>

void OddDisplay(int iNo)
{
    int iCnt = 0 ;

    for(iCnt = 1 ; iCnt <= iNo ; iCnt++)
    {
        if((iCnt % 2) != 0)
        {
            printf("%d\t",iCnt);
        }
    }
}
int main()
{
    int iValue = 0 ;

    printf("Enter The Number : ");
    scanf("%d",&iValue);

    OddDisplay(iValue);

    return 0 ;

}