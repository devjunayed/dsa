#include <stdio.h>
int main()
{
    char ch = 'j';

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
    {
        printf("%c is vowel\n", ch);
    }
    else
    {
        printf("%c is consonant\n", ch);
    }

    return 0;
}