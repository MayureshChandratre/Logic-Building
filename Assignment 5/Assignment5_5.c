///////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :         Assignment5_5.c
//  Description:        Program to accept number from user and print multiplication table till 5
//  Author :            Mayuresh Kiran Chandratre
//  Date:               14/05/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////////

# include <stdio.h>

int MultipleDisplay(int iNo)
{
    int iCnt = 0 ;

    for(iCnt = 1 ; iCnt <= 5 ; iCnt++)
    {
        printf("%d\t",(iNo * iCnt));
    }
}
int main()
{
    int iValue = 0 ;

    printf("Enter The Number : ");
    scanf("%d",&iValue);

    MultipleDisplay(iValue);

    return 0 ;

}