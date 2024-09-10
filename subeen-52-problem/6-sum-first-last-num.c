/*
 * Description of the problem
 * Write a program to find the sum value, a five-digit number's first and last digits.

 * Input
 * The first input 'T' contain test case number. Next T-number of lines with one integer each value going to print.

 * Output
 input          output
 3
12345           Sum = 6
14310           Sum = 1
10062           Sum = 3
 */

#include <stdio.h>

int main(void)
{
    int T, userNum, temp, sum;

    // input the number of test case
    printf("Enter test case number: ");
    scanf("%d", &T);

    for (int i = 0; i < T; i++)
    {
        printf("Enter a number only Five digit: ");
        scanf("%d", &userNum);

        temp = userNum;
        {
            int firstNum = temp / 10000;
            int lastNum = temp % 10;

            printf("Sum = %d\n", sum = firstNum + lastNum);
        }
        printf("\n");
    }
    return 0;
}
