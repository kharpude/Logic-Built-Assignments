// Assigment 2
// 1.Accept one number from user and print that number of * on screen.
#include <stdio.h>

void Diplay(int iNo)
{
    int iCnt = 0;

    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("*\n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the Number");
    scanf("%d", &iValue);

    Display(iValue);
    return 0;
}
