// 5. Write a program which accept N and print first 5 multiples of N.
// Input : 4
// Output : 4 8 12 16 20
#include<stdio.h>
void MultDisplay(int iNo)
{
    for(int i=1;i<=5;i++)
    {
        printf(" %d",iNo*i);
    }
}
int main()
{
    int iValue=0;

    printf("Enter The Number => ");
    scanf("%d",&iValue);

    MultDisplay(iValue);

    return 0;
}
