#include <stdio.h>
#include <string.h>

int main() {

    int age;
    char name[80];

  int n, i, flag = 0;
  printf("enter your age: ");
  scanf("%d", &n);

  printf("enter name");
  scanf("%s", &name);

  if (n == 0 || n == 1)
    flag = 1;

  for (i = 2; i <= n / 2; ++i) {

    if (n % i == 0) {
      flag = 1;
      break;
    }
  }

  if (flag == 0)
    printf("%d is a prime number.", n);
  else
    printf("%d is not a prime number.", n);

  return 0;
}