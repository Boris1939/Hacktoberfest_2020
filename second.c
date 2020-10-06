#include <stdio.h>

int main ()
{
  int num1, num2, num3;
  printf("Enter two numbers: \n");
  scanf("%d\n%d", &num1, &num2);
  num3 = num1 + num2;
  printf("The sum of two numbers is %d.", num3);
}
