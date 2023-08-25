#include <stdio.h>
int main()
{
    int a;
    int b;

    printf("enter the value for a and b : ");
    scanf("%d,%d", &a, &b);

    a = a + b; // a = 10+20=30  a=30
    b = a - b; // b = 30-20=10  b=10
    a = a - b; // a = 30-10=20  a=20

    printf(" a=%d\n b=%d", a, b);
}