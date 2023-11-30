// 4. Write a program to find odd factorial of given number.
// Input:5
// Output : 15 (5 * 3 * 1)
// Input : -5
// Output : 15  (5 * 3 * 1)
// Input : 10
// Output : 945 (9 * 7 * 5 * 3 * 1)

#include <stdio.h>
int OddFactorial(int iNo)
{
    int iCnt = 0, Mult = 1;
    if (iNo <= 0)
    {
        iNo = -iNo;
    }
    for (iCnt = 2; iCnt <= iNo; iCnt++)
    {
        if (iCnt % 2 != 0)
        {
            Mult = Mult * iCnt;
        }
    }
    return Mult;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number ");
    scanf("%d", &iValue);

    iRet = OddFactorial(iValue);
    printf("Odd Factorial of number is %d", iRet);

    return 0;
}