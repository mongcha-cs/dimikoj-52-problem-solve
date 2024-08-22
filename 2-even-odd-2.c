
/*
* Description of the problem
* Given an integer, find out whether it is even or odd.

* Input
*The first line will contain a number T(1 <= T <= 100). The value of the next, the more lines there will be. Each line will contain one integer. A number can have a maximum of 100 digits.

* Output:
* For each integer, print even if the number is even, and odd if it is odd.
*/

#include <stdio.h>
#include <string.h>

int main()
{
    int T;

    // Input the Limit number
    scanf("%d", &T);

    for (int i = 0; i < T; i++)
    {
        char number[101]; // To store up to 100 digits + null terminator

        // Input the number test cases
        scanf("%s", number);

        // Get the last digit of the number also convert the number string to integer
        int last_digit = number[strlen(number) - 1];

        // Check if the number even or odd
        if (last_digit % 2 == 0)
        {
            printf("even\n");
        }
        else
        {
            printf("odd\n");
        }
    }

    return 0;
}
