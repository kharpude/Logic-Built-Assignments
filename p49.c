// 4. Write a program which accept range from user and return addition of all even numbers in between that range. (Range should contains positive numbers only)
// Input:23 30
// Output : 108

#include <stdio.h>

int RangSumEven(int iStart, int iEnd)
{
    if (iStart <= 0 && iEnd <=0 )
    {
       iStart=-iStart;
       iEnd=-iEnd;
    }
    
    int icnt = 0, iSum = 0;
    for (icnt = iStart; icnt <= iEnd; icnt++)
    {
        if (icnt % 2 == 0)
        {
           iSum = iSum + icnt;
        }
        
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

    iRet = RangSumEven(iValue1, iValue2);

    printf("Sum of given rang is : %d ", iRet);

    return 0;
}

