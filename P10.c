// Assigment 2
//5. Accept number from user and check whether number is even or odd.


#include <stdio.h>
#include <stdbool.h>
#define true 1
#define false 0


bool CheckEven(int iNo)
{
   if ((iNo % 2) == 0)
   {
     return true;
   }
   else
   {
    return false;
   }
    
}

int main()
{
    int iValue=0;
    bool bRet=false;

    printf("Enter the Number\n");
    scanf("%d",&iValue);

    bRet=CheckEven(iValue);

    if (bRet == true)
    {
       printf("%d is Even Number",iValue);
    }
    else
    {
        printf("%d is odd Number",iValue);
    }



    return 0;
}