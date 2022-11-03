#include <stdio.h>
void div(int a)
{
    if (a % 5 == 0 && a % 11 == 0)
    {
        printf("divisible");
    }
    else
    {
        printf("not divisible");
    }
}
void main()
{
    div(55);
}