/*4. Accept one character from user and convert case of that character.
Input : a
Input: D
Output : A
Output : d*/

#include <stdio.h>

void DisplayConvert(char cValue)
{
    int iCnt = 0;
    if (islower(cValue))
    {
        // If the character is lowercase, convert it to uppercase
        printf("%c\n", toupper(cValue));
    }
    else if (isupper(cValue))
    {
        // If the character is uppercase, convert it to lowercase
        printf("%c\n", tolower(cValue));
    }
    else
    {
        // If it's not a letter, print an error message or handle it as needed
        printf("Not a valid letter.\n");
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter the character: \n");
    scanf("%c", &cValue);

    DisplayConvert(cValue);

    return 0;
}
