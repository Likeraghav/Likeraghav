#include <stdio.h>
void year(int a)
{
    if ((a % 100 != 0 || a % 400 == 0) && (a % 4 == 0))
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
}
void main()
{
    year(1600);
}