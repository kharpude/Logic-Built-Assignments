// 5. Write a program which accept number from user and display its table in revers
// order.
// Input : 2
// Output :  20 18 16 14 12 10 8 06 4 2
// Input: 5
// Output : 50 45 40 35 30 25 20 15 10 5
// Input :-5
// Output : 50 45 40 35 30 25 20 15 10 5
#include <stdio.h>
void Table(int iNo)
{
    if (iNo <= 0)
    {
        iNo = -iNo;
    }

    int iCnt =0,iTable=0;

    for (iCnt = 10; iCnt >=  1; iCnt--)
    {
        iTable = iNo * iCnt;
        printf("%d ", iTable);
    }

}

int main()
{
    int iValue = 0;

    printf("Enter a Number: ");
    scanf("%d", &iValue);

    Table(iValue);

    return 0;
}
