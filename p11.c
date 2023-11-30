/* 1.Write a program which accept one number from user and print that number of even numbers on screen.
Input : 7
Output: 2 4 6 8 10 12 14*/
#include <stdio.h>

void PrintEven(int iNo)
{
    int iCnt = 0;
    int even = 2;

    if (iNo <= 0)
    {
        return;
    }

    for (iCnt = 0; iCnt < iNo; iCnt++)
    {
        printf("%d ", even); 
        even += 2;           
    }
    printf("\n"); 
}

int main()
{
    int iValue;

    printf("Enter a number: ");
    scanf("%d", &iValue);

    PrintEven(iValue);
    return 0;
}

