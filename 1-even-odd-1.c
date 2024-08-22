
/*
* Description of the problem
* Given an integer, find out whether it is even or odd.

* Input
*The first line will contain a number T(1<=T<=100). The later the value of T, the more lines there will be. One integer per line N(0<=N <= 2, 147, 483, 647) will be given.

* Output:
* For each integer, print even if the number is even, and odd if it is odd.
*/

#include <stdio.h>

int main()
{
    int T, N;

    // Input the number of test cases
    scanf("%d", &T);

    // Loop through each test case
    for (int i = 0; i < T; i++)
    {
        // Input the number N for each test case
        scanf("%d", &N);

        // Check if the number is even or odd
        if (N % 2 == 0)
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