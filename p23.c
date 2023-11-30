// 3. Write a program which accept two numbers and check whether numbers are  equal or not.
// Input : 10 10
// Output : Equal
// Input : 10 12
// Output : Not Equal
// Input : 10-10
// Output : Not Equal

#include <stdio.h>
typedef int Bool;
#define TRUE 1
#define FALSE 0

Bool ChkEqual(int iNo1,int iNo2)
{
    if (iNo1 == iNo2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int iValue1 = 0, iValue2=0;
    Bool Bret = FALSE;

    printf("Please enter two number: ");
    scanf("%d%d", &iValue1,&iValue2);

    Bret = ChkEqual(iValue1,iValue2);

    if (Bret == TRUE)
    {
        printf("Equal");
    }
    else
    {
        printf("Not Equal");
    }

    return 0;
}