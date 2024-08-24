#include <stdio.h>

int main()
{
    int line_limit, i, j, userValue;

    // Input the number of test cases
    printf("Enter case line: ");
    scanf("%d", &line_limit);

    while (line_limit--)
    {
        // Input the User value for the current test case
        printf("Enter your number: ");
        scanf("%d", &userValue);

        // Print the square pattern
        for (i = 0; i < userValue; i++)
        {
            for (j = 0; j < userValue; j++)
            {
                printf("*");
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}
