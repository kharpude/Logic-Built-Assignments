// 5. Write a program which accept total marks & obtained marks from user and calculate percentage.
// Input : 1000 745
// Output : 74.5%
#include <stdio.h>

float Percentage(int iNo1, int iNo2)
{
    if (iNo1 <= 0)
    {
        printf("Invalid Data");
        return 0.0;
    }
    return ((float)iNo2 / iNo1) * 100.0;
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    float fRet;

    printf("Please Enter Total Marks => ");
    scanf("%d", &iValue1);
    printf("Please Enter Obtained Marks => ");
    scanf("%d", &iValue2);

    fRet = Percentage(iValue1, iValue2);

    if (fRet != 0.0) {
        printf("Percentage => %0.2f", fRet);
    }

    return 0;
}
