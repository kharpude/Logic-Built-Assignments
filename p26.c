// 1. Write a program which accept number from user and print that number of $ & * on screen.
// Input : 5
// Output : $ * $ * $ * $ * $ *

// Input : 3
// Output : $ * $ * $ *

// Input : -3
// Output : $*  $ * $ *

#include <stdio.h>

void Pattern(int iNo)
{
    if (iNo <= 0)
    {
        iNo = -iNo;
    }

    int iCnt = 0;
    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("$ *");
    }
}

int main()
{
    int iValue;

    printf("Enter Number: ");
    scanf("%d", &iValue);

    Pattern(iValue);
    return 0;
}