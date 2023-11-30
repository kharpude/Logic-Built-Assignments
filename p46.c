// 1. Write a program which accept range from user and display all numbers in between that range.
// Input :23 35
// Output :23 25 24 25 26 27 28 29 30 31 32 33 34 35

#include <stdio.h>

void RangDisplay(int iStart,int iEnd)
{
    int icnt=0;
    for (icnt = iStart; icnt <= iEnd; icnt++)
    {
       printf("%d ", icnt);
    }
    printf("\n");
    
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter Staring Point: ");
    scanf("%d", &iValue1);

    printf("Enter Ending  Point: ");
    scanf("%d", &iValue2);

    RangDisplay(iValue1,iValue2);

    return 0;
}
