/*4.1. Write a program which accept number from user and display its multiplication of
factors.
Input : 12
Output: 144
Input : 13
Output : 1
*/
#include<stdio.h>

int MultFact(int iNo)
{
        int Cnt=1,Mult=1;

        if(iNo<=0)
        {
            printf("Wrong Input");
            exit(0);
        }
        while(iNo/2>=Cnt)
        {
            if(iNo%Cnt==0)
            {
                Mult=Mult*Cnt;
            }
            Cnt++;
        }
        return Mult;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number");
    scanf("%d",&iValue);

    iRet = MultFact(iValue);

    printf("%d",iRet);

    return 0;
 }