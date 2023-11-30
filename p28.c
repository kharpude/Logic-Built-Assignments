// 3. Write a program which accept number from user and print its numbers line.
// Input : 4
// Output : -4 -3 -2 -1

#include<stdio.h>
void Display(int iNo)
{
    for(int i=-(iNo);i<=iNo;i++)
    {
        printf("%3d",i);
    }
}
int main()
{
    int iNo=0;

    printf("Enter The Number => ");
    scanf("%d",&iNo);

    Display(iNo);

    return 0;
}