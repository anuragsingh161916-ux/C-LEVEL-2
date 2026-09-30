#include <stdio.h>

int main()
{
    int age;
    printf("Enter your Age : ");
    scanf("%d", &age);

    if (age < 0)
    {
        printf("Error: Age cannot be negative\n");
    }

    else if (age >= 18)

    {
        printf("You are eligible to vote ");
    }
    else
    {
        printf("You are not eligible to vote now \n");
        printf("You need to wait %d year(s) more \n", 18 - age);
    }

    return 0;
}