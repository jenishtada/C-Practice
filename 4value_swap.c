#include <stdio.h>
int main()
{
    int a;
    int b;
    int c;
    int d;

    printf("enter the value for a and b : ");
    scanf("%d,%d,%d,%d", &a, &b, &c, &d);

    printf(" a=%d\t b=%d\t c=%d\t d=%d\n", a, b, c, d);

    a = a + b + c + d;
    b = a - b - c - d;
    c = a - b - c - d;
    d = a - b - c - d;
    a = a - b - c - d;
    printf(" a=%d\t b=%d\t c=%d\t d=%d\n", a, b, c, d);
}