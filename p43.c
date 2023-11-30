// 3. Write a program which accept distance in kilometre and convert it into meter. (1 kilometre = 1000 Meter)
// Input : 5
// Output : 5000
// Input : 12
// Output : 12000

#include<stdio.h>

int KMToMeter(int iNo)
{
    return iNo*1000;
}

int main()
{
    int iValue=0,iRet=0;

    printf("Enter Distance: ");
    scanf("%d",&iValue);

    iRet = KMToMeter(iValue);

    printf("Kilometer value in meter value is : %d",iRet);
    return 0;
}