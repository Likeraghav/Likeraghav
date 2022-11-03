#include <stdio.h>
void vowel(char a)
{
    char b = tolower(a);
    if (b == 'a' || b == 'e' || b == 'i' || b == 'o' || b == 'u')
    {
        printf("Vowel");
    }
    else
    {
        printf("Consonent");
    }
}
void main()
{
    vowel('A');
}