#include <stdio.h>
int main()
{
    int a = 15;
    int b = 12;
    int c = 18;

    printf("a=%d\t b=%d\t c=%d\n", a, b, c);

    a = a + b + c; // a = 10+20=30 a=30
    b = a - b - c; // b = 30-20=10 b=10
    c = a - b - c; // c = 30-10=20 c=20
    a = a - b - c;

    printf("a=%d\t b=%d\t c=%d\n", a, b, c);
}