#include <stdio.h>

int main() {
  int x = 35;
  int y = 42;
  printf("x is %d and y is %d", x, y);
  
  int temp = x;
  x = y;
  y = temp;
  
  printf("x is %d and y is %d", x, y);
}
