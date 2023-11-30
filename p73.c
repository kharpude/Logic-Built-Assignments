// 3. Accept N numbers from user and accept one another number as NO, return index of last occurrence of that NO.
// Input : N 6
// NO: 66
// Elements: 85 66 3 66 93 88
// Output : 3

#include <stdio.h>
#include <stdlib.h>

int FirstOcc(int Arr[], int iLenght, int iNo)
{
    int iCnt = 0;
    for (iCnt = iLenght; iCnt > 0; iCnt--)
    {
        if (Arr[iCnt] == iNo)
        {
            return iCnt;
        }
    }
    return -1;
}

int main()
{
    int iSize = 0, iCnt = 0, iValue = 0, iRet = 0;
    int *p = NULL;

    printf("Enter number of elemnts: ");
    scanf("%d", &iSize);

    printf("\n Enter the number: ");
    scanf(" %d", &iValue);

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

    iRet = FirstOcc(p, iSize, iValue);

    if (iRet == -1)
    {
         printf("There is no such a number is %d", iRet);
    }
    else
    {
        printf("First occurrence of number is %d", iRet);
    }

    free(p);
    return 0;
}