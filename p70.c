// 5. Accept N numbers from user and accept one another number as NO,return frequency of NO form it.
// Input : N: 6
// No:66
// Elements : 85  66 3 93 88
// Output : 2
#include <stdio.h>
#include <stdlib.h>

int Frequency(int Arr[], int iLenght, int iNo)
{
    int iCnt = 0, iCount = 0;

    for (iCnt = 0; iCnt < iLenght; iCnt++)
    {
        if (Arr[iCnt] == iNo)
        {
            iCount++;
        }
    }
    return (iCount);
}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0, iValue = 0;
    int *p = NULL;

    printf("Enter number of elements \n");
    scanf("%d", &iSize);

    printf("Enter number for serach frequency: \n");
    scanf("%d", &iValue);

    p = (int *)malloc(iSize * sizeof(int));

    if (p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enetr %d elements \n", iSize);

    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter elemnt  %d: \n", iCnt + 1);
        scanf("%d", &p[iCnt]);
    }

    iRet = Frequency(p, iSize, iValue);

    printf("Result is %d", iRet);

    free(p);

    return 0;
}
