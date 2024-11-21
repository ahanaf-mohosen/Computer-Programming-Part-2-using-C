#include <stdio.h>

int main()
{
    int n, count, i;
    scanf("%d", &n);
    count = 0;
    while (n)
    {
        if (n & 1)
        {
            count++;
        }
        n = n >> 1;
    }
    printf("Number of 1's in binary representation: %d", count);
    return 0;
}