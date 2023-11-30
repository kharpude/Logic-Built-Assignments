// 5. Write a program which accept accept range from user and display all numbers in between that range in reverse order.
// Input :23
// Output : 35 34 33 32 31 30 29 28 27 26 25 24 23
#include <stdio.h>

void RangDisplay(int iStart,int iEnd)
{
    int icnt=0;
    for (icnt = iEnd; icnt >= iStart; icnt--)
    {
       printf("%d ", icnt);
    }
    printf("\n");
    
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter Staring Point: ");
    scanf("%d", &iValue1);

    printf("Enter Ending  Point: ");
    scanf("%d", &iValue2);

    RangDisplay(iValue1,iValue2);

    return 0;
}
