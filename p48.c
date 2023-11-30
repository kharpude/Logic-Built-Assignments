// 3. Write a program which accept range from user and return addition of all numbers in between that range. (Range should contains positive numbers only)
// Input :23 30
// Output : 212
#include <stdio.h>

int RangSum(int iStart, int iEnd)
{
    int icnt = 0, iSum = 0;
    for (icnt = iStart; icnt <= iEnd; icnt++)
    {
        iSum = iSum + icnt;
    }
    return iSum;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;

    printf("Enter Staring Point: ");
    scanf("%d", &iValue1);

    printf("Enter Ending  Point: ");
    scanf("%d", &iValue2);

    iRet = RangSum(iValue1, iValue2);

    printf("Sum of given rang is : ", iRet);

    return 0;
}
