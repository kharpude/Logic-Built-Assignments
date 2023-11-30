// 3. Accept N numbers from user and return the difference between largest and smallest number.
// Input : N: 6
// NO: 66
// Elements 85 66 3 66 93 88
// Output : 90 (93 - 3)

#include <stdio.h>
#include <stdlib.h>

int Difference(int Arr[], int iLenght)
{
    int iCnt = 0, iMax = Arr[0], iMin = Arr[0];
    for ( iCnt = 1; iCnt < iLenght; iCnt++)
    {
        if (Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }
        else if (Arr[iCnt] < iMin)
        {
            iMin = Arr[iCnt];
        }
    }
    return (iMax - iMin);
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

    iRet = Difference(p, iSize);

    printf("\n Maximum Number is %d", iRet);

    free(p);
    return 0;
}
