
/*
* Description of the problem
- Find all factors (divisors) of a number.

*Input
- The first line will contain number of test cases T(<=10). Next T-number of lines will contain 1 integer N each, where 1 <= N <= 5,.. number.

*Output
- One line should be printed for each case, beginning with the case number. Then print all factors of N in ascending order. Each factor should be printed only once. Factors must be separated 1 space only. There will be no extra spaces at the end of the line.

*/

#include <stdio.h>

int main()
{
    int N_limitNum, i, j, userNum;

    // Input the number test cases line
    printf("How many divisors you want ? : ");
    scanf("%d", &N_limitNum);

    for (i = 1; i <= N_limitNum; i++)
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