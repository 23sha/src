#include <stdio.h>

int main() {
  int x = 0;
  int y = 1;
  for(int i = 0; i < 10; i++) {
    x += 2;
    printf("%d, %d\n", x, y);
    y += 2;
  }
  printf("This is only a test!!\n");
}
