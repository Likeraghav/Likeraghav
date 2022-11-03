#include <stdio.h>
void main()
{
    int a = 25;
    int n[] = {2000, 200, 100, 50, 20, 10, 5, 2, 1};
    printf("Total number of notes =%d\n", a);
    int i;
    for (i = 0; i < 9; i++)
    {
        if (a >= n[i])
        {
            int c=0;
            c = a / n[i];
            a -= c * n[i];
            printf("%d = %d", n[i], c);
            printf("\n");
        }
    }
}