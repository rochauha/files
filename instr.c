#include <stdio.h>

int incr(int x);

int main() {
  printf("%d\n", incr(10));
}

int incr(int x) {
  return x + x + 100;
}


