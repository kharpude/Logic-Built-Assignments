// 1. Accept N numbers from user and return the largest number.
// Input : N: 6
// NO: 66
// Elements 85 66 3 66 93 88
// Output : 93

#include <stdio.h>
#include <stdlib.h>

int Maximum(int Arr[], int iLenght)
{
    int iCnt = 0, iMax = Arr[0];
    for (iCnt = 1; iCnt < iLenght; iCnt++)
    {
        if ( Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }
    }
    return iMax;
}

int main()
{
    int iSize = 0, iCnt = 0, iRet = 0;
    int *p = NULL;

    printf("Enter number of elemnts: ");
    scanf("%d", &iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if (p == NULL)
    {
        printf("\n Unable to allocate memory");
        return -1;
    }

    printf("\n Enter %d elements ", iSize);

    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("\n Enter Elements %d : ", iCnt + 1);
        scanf("%d", &p[iCnt]);
    }

    iRet = Maximum(p, iSize);

    printf("\n Maximum Number is %d", iRet);

    free(p);
    return 0;
}