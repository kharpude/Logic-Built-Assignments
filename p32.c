// 2. Accept single digit number from user and print it into word.
// Input : 9
// Output : Nine
// Ourput : Three
// Input : 12
// Output : Invalid Number

#include <stdio.h>
void Display(int iNo)
{
    switch (iNo)
    {
    case 1:
        printf("One");
        break;
    case 2:
        printf("Two");
        break;
    case 3:
        printf("Three");
        break;
    case 4:
        printf("Four");
        break;
    case 5:
        printf("Five");
        break;
    case 6:
        printf("six");
        break;
    case 7:
        printf("Seven");
        break;
    case 8:
        printf("Eight");
        break;
    case 9:
        printf("Nine");
        break;

    default:
        printf("Please enter the single digit number");
    }
}

int main()
{
    int iNo;

    printf("Enter Number: ");
    scanf("%d", &iNo);

    Display(iNo);

    return 0;
}
