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
        // Each line 5 output number onlym can show
        if (count == 5)
        {
            printf("\n");
            count = 0;
        }
    }

    return 0;
}
