#include <stdio.h>

int main() {
  int a, b;
  scanf("%d",&a);
  scanf("%d",&b);
  if (a > b) {
    printf("%s\n","a > b");
  } else if (a < b) {
    printf("%s\n","a < b");
  } else {
    printf("%s\n","a == b");
  }
  return 0;
}
