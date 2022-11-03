#include <stdio.h>
void main()
{
    char a = '5';
    if ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z'))
    {
        printf("Alphabet");
    }
    else
    {
        printf("not a alphabet");
    }
}