#include <stdio.h>

int main()
{
    float marks;
    printf("Enter valid marks (0-100) : ");
    scanf("%f", &marks);
    if (marks < 0 || marks > 100)
    {
        printf("Error: Marks must be between 0 and 100.\n");
    }
    else if (marks >= 80)
    {
        printf("You passed with Grade 'A'\n");
    }
    else if (marks >= 70)
    {
        printf("You passed with Grade 'B'\n");
    }
    else if (marks >= 60)
    {
        printf("You passed with Grade 'C'\n");
    }
    else if (marks >= 33)
    {
        printf("You passed with Grade 'D'\n");
    }
    else
    {
        printf("You are FAIL\n");
    }

    return 0;
}