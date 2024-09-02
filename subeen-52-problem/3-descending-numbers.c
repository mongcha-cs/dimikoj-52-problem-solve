
/*
* Description of the problem
- Write a program that print all the numbers 1000 to 1 in descending order.

*Input
- There is no input

* Output
Each line output total 5 number and separated each othe by '\t' (tab) character.

*/

#include <stdio.h>

int main()
{
    int i, count = 0;

    // Print 1000 to 1 Descending number
    for (i = 1000; i >= 1; i--)
    {
        printf("%d\t", i);

        // Increase count value
        count++;
        // Each line 5 output number only can show
        if (count == 5)
        {
            printf("\n");
            count = 0;
        }
    }

    return 0;
}
