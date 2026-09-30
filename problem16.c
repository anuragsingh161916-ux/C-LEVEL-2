#include <stdio.h>

int main()
{
    char ch;
    printf("Enter an ALPHABET : ");
    scanf("%c", &ch);

    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))

        if (ch == 'A' || ch == 'a' || ch == 'E' || ch == 'e' || ch == 'I' 
            || ch == 'i' || ch == 'O' || ch == 'o' || ch == 'U' || ch == 'u')
        {
            printf("%c is a VOWEL\n", ch);
        }
        else
        {
            printf("%c is a consonant\n", ch);
        }
    else
    {
        printf("'%c' is not an alphabet\n", ch);
    }

    return 0;
}