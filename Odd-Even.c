#include <stdio.h>

int main(void) {
  int i, odd, even, count , num;
  odd = 0;
  even = 0;
printf("How many number do u want to enter ::");
scanf("%d",&count);

  for (i = 1; i <= count ; i++) {
    printf("data: ");
    scanf("%d", &num);

    if (num % 2 == 0)
    {
        even++;
    }
    else
    {
        odd++;
    }
  }

  printf("The number of even numbers is %d, and the number of odd numbers is %d.\n", even, odd);
  return 0;
}
