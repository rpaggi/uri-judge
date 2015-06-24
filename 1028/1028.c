#include <stdio.h>
#include <math.h>

int mdc (int a, int b) {
  if (a == b)
    return a;
  if (a > b)
    return mdc(b, a-b);
  else
    return mdc(a, b-a);
}

int main () {
  int n, a, b, i;
  scanf("%d", &n);

  for (i = 0; i < n; i++) {
    scanf("%d", &a);
    scanf("%d", &b);

    printf("%d\n", mdc(a,b));
  }

  return 0;
}