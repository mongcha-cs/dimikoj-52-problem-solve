
/*
* Description of the problem
- Make a square box with * sign.

* Input
- The first line will contain number of test cases number, then contain square box * size.

* Output
- Each N value for (N * N) Draw the square. The entire square must be filled with '*' Each square should be separated by a blank line. No extra blank lines or spaces may be placed anywhere other than as separators.
*/

#include <stdio.h>

int main()
{
    int case_limit, i, j, userValue;

    // Input the number of test cases
    printf("Enter case line: ");
    scanf("%d", &case_limit);

    while (case_limit--)
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
