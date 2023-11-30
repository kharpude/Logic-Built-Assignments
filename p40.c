// 5. Write a program which returns difference between Even factorial and odd factorial
// of given number.
// Input:5
// Output : -7 (8 - 15)
// Input:-5
// Output : -7  (8 - 15)
// Input :10
// Output : 2895 (3840 - 945)
#include <stdio.h>
int FactorialDiff(int iNo)
{
    int i=0,EvenMult=1,OddMult=1;

    if(iNo<0)
    {
        iNo=-(iNo);
    }
    for(i=2;i<=iNo;i++)
    {
        if(i%2!=0)
        {
            OddMult=OddMult*i;
        }
        else
        {
            EvenMult=EvenMult*i;
        }
    }
    return EvenMult-OddMult;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number ");
    scanf("%d", &iValue);

    iRet = FactorialDiff(iValue);
    printf("Difference between Even & odd Factorial of number is %d", iRet);

    return 0;
}