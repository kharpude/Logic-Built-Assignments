// 3.Write a program to find factorial of given number.
// Input : 5 (5*4*3 * 2* 1)
// Output : 120
// Input:-5 (5*4*3*2* 1)
// Output : 120
// Input :4 (4 * 3 * 2 * 1)
// Output : 24
#include <stdio.h>

int Factorial(int iNo)
{
  if (iNo <= 0)
  {
    iNo = -iNo;
  }

  int iCnt, iAns = 1;

  for (iCnt = 1; iCnt <= iNo; iCnt++)
  {
    iAns = iAns * iCnt;
  }

  return iAns;
}

int main()
{
  int iValue = 0, iRet = 0;

  printf("Enter a Number: ");
  scanf("%d", &iValue);

  iRet = Factorial(iValue);

  printf("Factorial of given number is: %d", iRet);

  return 0;
}
