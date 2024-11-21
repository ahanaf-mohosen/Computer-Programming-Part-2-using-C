#include <stdio.h>

int main()
{
    int ara[] = {1, 2, 3, 4, 1, 2, 3};
    int result, i, n = 7;

    result = ara[0];

    for (i = 1; i < n; i++)
    {
        result ^= ara[i];
    }
    printf("The unique element is: %d\n", result);
    return 0;
}