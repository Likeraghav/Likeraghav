#include <stdio.h>
void evenodd(int a)
{
  (a%2)? printf("odd"):printf("even");
}
void main() {
    evenodd(22);
}