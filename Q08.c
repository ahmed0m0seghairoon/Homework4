#include <stdio.h>

int main() {
  int n, sum = 0;
  printf("Please enter a number \n");
  scanf("%d", &n);

  for (int i = 2; i <= n; i++) {
    int is_prime = 1;

    for (int j = 2; j < i; j++) {
      if (i % j == 0) {
        is_prime = 0;
        break;
      }
    }

    if (is_prime == 1) {
      sum += i;
    }
  }

  printf("the sum of all prime numbers between 1 and %d is %d",n,sum);

  return 0;
}