#include <stdio.h>

int f_calls = 0;

int factorial(int n)
{
    f_calls++;
    if (n == 0)
    {
        return 1;
    }
    return n * factorial(n - 1);
}
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0)
    {
        printf("Error: Factorial is not defined for negative numbers.\n");
        return 0;
    }
    printf("Factorial of %d is: %d\n", num, factorial(num));
    printf("Number of function calls: %d\n", f_calls);
    return 0;
}