/////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :         Assignment5_3.c
//  Description:        Program to accept number from user and print numbers in reverse order
//  Author :            Mayuresh Kiran Chandratre
//  Date:               14/05/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////

# include <stdio.h>

void Display(int iNo)
{
    int iCnt = 0 ;

    for(iCnt = -iNo; iCnt <= iNo; iCnt++)
    {
        printf("%d\t",iCnt);
    }
}
int main()
{
    int iValue = 0 ;

    printf("Enter The Number : ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0 ;

}