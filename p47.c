// 1. Write a program which accept range from user and display all even numbers in between that range.
// Input :23 35
// Output  24  26  28  30 1 32  34
// Input :10
#include <stdio.h>

void RangDisplayEven(int iStart, int iEnd)
{
    int icnt = 0;
    for (icnt = iStart; icnt <= iEnd; icnt++)
    {
        if (icnt % 2 == 0)
        {
            printf("%d ", icnt);
        }
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter Staring Point: ");
    scanf("%d", &iValue1);

    printf("Enter Ending  Point: ");
    scanf("%d", &iValue2);

    RangDisplayEven(iValue1, iValue2);

    return 0;
}
