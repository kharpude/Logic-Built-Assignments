// 4. Accept N numbers from user and display all such numbers which contains3 digits in it.
// Input : N: 6
// Elements: 8255 665 3 76 953 858
// Output :665 953 858
#include <stdio.h>
#include <stdlib.h>

void Digits(int Arr[], int iLen)
{
    for (int iCnt = 0; iCnt < iLen; iCnt++)
    {
        int Temp = Arr[iCnt];
        int iCount = 0;

        while (Temp > 0)
        {
            iCount++;
            Temp /= 10;
        }

        if (iCount == 3)
        {
            printf("%d ", Arr[iCnt]);
        }
    }
}

int main()
{
    int iSize = 0, *p = NULL;

    printf("Enter The Number Of Elements \n ");
    scanf("%d", &iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if (p == NULL)
    {
        printf("Failed To Allocate Memory....");
    }
    else
    {
        printf("Enter The Elements\n");
        for (int iCnt = 0; iCnt < iSize; iCnt++)
        {
            printf("Enter The Element %d => ", iCnt + 1);
            scanf("%d", &p[iCnt]);
        }

        printf("Numbers with exactly three digits: ");
        Digits(p, iSize);
    }

    free(p);
    return 0;
}
