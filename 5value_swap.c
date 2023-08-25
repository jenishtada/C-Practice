#include <stdio.h>
int main()
{
    int a = 10;
    int b = 20;
    int c = 30;
    int d = 40;
    int e = 50;

    printf("a=%d\t b=%d\t c=%d\t d=%d\t e=%d\n", a, b, c, d, e);

    a = a + b + c + d + e;
    b = a - b - c - d - e;
    c = a - b - c - d - e;
    d = a - b - c - d - e;
    e = a - b - c - d - e;
    a = a - b - c - d - e;

    printf("a=%d\t b=%d\t c=%d\t d=%d\t e=%d\n", a, b, c, d, e);
}