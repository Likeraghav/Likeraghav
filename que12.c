#include <stdio.h>
int main()
{
    int b = 2;
    int a[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (b > 12 || b < 1)
    {
        printf("Invalid number");
    }
    else if (b == 2)
    {
        printf("28,29 day in this month");
    }
    else
    {
        printf("no of days in month %d is %d", b, a[b - 1]);
    }
}