#include <stdio.h>
void number(int a)
{
    if (a == 0)
    {
        printf("Zero");
    }
    else if (a > 0)
    {
        printf("positive");
    }
    else
    {
        printf("Negetive");
    }
}
void main()
{
    number(0);
}