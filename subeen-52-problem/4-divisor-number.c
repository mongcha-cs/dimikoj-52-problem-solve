
#include <stdio.h>

int main()
{
    int line_limitNum, i, j, userNum;

    // Input the number test cases line
    printf("How many number you want: ");
    scanf("%d", &line_limitNum);

    for (i = 1; i <= line_limitNum; i++)
    {
        // Input user divisor number
        printf("Enter your check number: ");
        scanf("%d", &userNum);

        // Print Case number
        printf("Case %d: ", i);

        for (j = 1; j <= userNum; j++)
        {
            if (userNum % j == 0)
            {
                printf("%d ", j);
            }
        }
        // Print a new line after current case over
        printf("\n");
    }

    return 0;
}