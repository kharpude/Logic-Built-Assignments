/*4. Write a program which accept number from user and return summation of all its
non factors.
Input 12
Output:50

Input 10
Output:37
*/

#include <stdio.h>

void SumNonFactors(int iNo)
{
    int iCnt = 0;
    int Sum = 0;
    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if (iNo % iCnt != 0)
        {

            Sum = Sum + iCnt;
        }
    }

    printf("Sum of Non Factor of are: %d", Sum);
}

int main()
{
    int iValue;
    printf("Enter a number: ");
    scanf("%d", &iValue);

    SumNonFactors(iValue);

    return 0;
}
