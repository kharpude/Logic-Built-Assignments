// 4. Write a program which accept number from user and return multiplication of all
// digits.
// Input :
// Output
// 2395
// 270
#include <stdio.h>
int MultDigits(int iNo)
{
    int iDigit = 0;
    int iMult = 1;
    while (iNo > 0)
    {
        iDigit = iNo % 10;
        iMult = iMult * iDigit;
        iNo /= 10;
        printf("%d\n", iNo);
    }
    return iMult;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter a Number: ");
    scanf("%d", &iValue);

    iRet = MultDigits(iValue);

    printf("Multiplication of digit is : %d", iRet);

    return 0;
}