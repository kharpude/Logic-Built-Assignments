// 5. Accept N numbers from user and display summation of digits of each number.
// Input : N 6
// Elements : 8225 665 3 76 953 858
// Output : 17 17 3 13 17 21

#include <stdio.h>
#include <stdlib.h>

void SumOfDigits(int Arr[], int iLength)
{
    int iCnt = 0,iNo=0,iSum=0;
    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        int iNo = Arr[iCnt];
        while (iNo > 0)
        {
            iSum += iNo % 10;
            iNo /= 10;
        }
        printf("%d ", iSum);
    }
}

int main()
{
    int iSize = 0, iCnt=0,*p = NULL;

    printf("Enter The Number Of Elements => ");
    scanf("%d", &iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if (p == NULL)
    {
        printf("Failed To Allocate Memory....");
    }
    else
    {
        printf("Enter The Elements\n");
        for (iCnt = 0; iCnt < iSize; iCnt++)
        {
            printf("Enter The Element %d => ", iCnt + 1);
            scanf("%d", &p[iCnt]);
        }

        printf("Sum of digits for each number: ");
        SumOfDigits(p, iSize);
    }

    free(p);
    return 0;
}
