// 1. Write a program which accept number from user and display below pattern.
// Input : 5
// Output : * * * * * # # # # #
// Input : 6
// Output : * * * * * * # # # # # #
// Input : -5
// Output : * * * * * * # # # # # #
// Input : 2
// Output : * * # # 
#include <stdio.h>

void Display(int iNo) {
    int iCnt;

    if (iNo < 0) {
        iNo = -iNo; 
    }

    for (iCnt = 1; iCnt <= iNo; iCnt++) {
        printf("* ");
    }

    for (iCnt = 1; iCnt <= iNo; iCnt++) {
        printf("# ");
    }
    
    printf("\n");
}

int main() {
    int iValue = 0;

    printf("Enter Number: ");
    scanf("%d", &iValue);

    Display(iValue);
    return 0;
}
