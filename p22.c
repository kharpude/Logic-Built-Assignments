/*2. Write a program which accept one number from user and check whether that
number is greater than 100 or not.
Input: 101
Output : Greater
Input : 39
Output : Smaller*/
#include <stdio.h>
typedef int Bool;
#define TRUE 1
#define FALSE 0

Bool ChkGreater(int iNo)
{
    if (iNo > 100)
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
    int iValue = 0;
    Bool Bret = FALSE;

    printf("Enter a number: ");
    scanf("%d", &iValue);

    Bret = ChkGreater(iValue);

    if (Bret == TRUE)
    {
        printf("Greater");
    }
    else
    {
        printf("Smaller");
    }

    return 0;
}