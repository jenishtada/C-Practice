#include <stdio.h>
int factorial(int n)
{
    if (n != 0)
    {
        return n * factorial(n - 1);
    }
    else
    {
        return 0;
    }
}
int main()
{
    int result = factorial(0);
    printf("the result is %d\n", result);
}