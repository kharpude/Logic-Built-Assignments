// Assigment 2
// 1.Accept one number from user and print that number of * on screen.
#include <stdio.h>

void Display(int iNo)
{
    while (iNo > 0)
    {
      printf("*\n");
      iNo--;
    }
    
}

int main()
{
    int iValue = 0;

    printf("Enter the Number");
    scanf("%d", &iValue);

    Display(iValue);
    return 0;
}
