// 5. Write a program which accept number from user and return difference between summation of even digits and summation of odd digits.
// Input : 2395
// Output : -15 (2 - 17)
#include <stdio.h>

int CountDiff(int iNo)
{
    int iDigit = 0,iSub=0;
    int iEvenSum = 0, iOddSum = 0;

    while (iNo > 0)
    {
       iDigit = iNo %10;
       if (iDigit % 2 == 0)
       {
         iEvenSum += iDigit;
       }
       else
       {
        iOddSum += iDigit;
       }
       iNo /= 10;
    }
    return iSub = iEvenSum - iOddSum;
}
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter a Number: ");
    scanf("%d", &iValue);

    iRet = CountDiff(iValue);

    printf("Difference between summation of even digits & odd digits: %d", iRet);

    return 0;
}