///////////////////////////////////////////////////////////////////////////////
//
//  File name :         Assignment5_1.c
//  Description:        Program to print a pattern of $ and *
//  Author :            Mayuresh Kiran Chandratre
//  Date:               14/05/2025
//
///////////////////////////////////////////////////////////////////////////////

# include <stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0 ;

    for(iCnt = 1 ; iCnt <= iNo ; iCnt++)
    {
        printf("$\t*\t");
    }
}
int main()
{
    int iValue = 0 ;

    printf("Enter The Number : ");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0 ;

}