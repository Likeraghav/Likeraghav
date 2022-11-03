#include <stdio.h>
void max(int a, int b)
{
  (a > b) ? printf("%d", a) : printf("%d", b);
}
void main()
{
  max(20, 30);
}