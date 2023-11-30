/*2. Write a program which accept number from user and print even factors of that number.
Input 24
Output: 1 2 4 6 8 12*/
#include <stdio.h>

void FindFactors(int iNo)
{
    printf("Factors of %d are: ", iNo);
    int iCnt = 0;
    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if (iNo % iCnt == 0 && iCnt % 2 == 0)
        {
            printf("%d ", iCnt);  
        }
    }

    printf("\n");
}

int main()
{
    int iValue;
    printf("Enter a number: ");
    scanf("%d", &iValue);

    FindFactors(iValue);

    return 0;
}
