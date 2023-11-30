//Assigment 1
// 4. Accept one number and check whether is is divisible by 5 or not.
#include <stdio.h>
#include <stdbool.h>
#define true 1
#define false 0


bool CheckValue(int iNo)
{
   if ((iNo % 5) == 0)
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

    printf("Enter the Number");
    scanf("%d",&iValue);

    bRet=CheckValue(iValue);

    if (bRet == true)
    {
       printf("Divisible by 5");
    }
    else
    {
        printf("Not Divisible by 5");
    }



    return 0;
}
