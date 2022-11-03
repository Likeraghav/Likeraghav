#include <stdio.h>
void main()
{
    char a = 'A';
    if (a >= 'a' && a <= 'z')
    {
        printf("lowercase");
    }
    else if (a >= 'A' && a <= 'Z')
    {
        printf("uppercase");
    }
    else
    {
        printf("None");
    }
}