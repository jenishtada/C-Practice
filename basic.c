#include <stdio.h>

int main()
{
    int num;
    float pi;
    char alpha;

    printf("enter the value for num,pi,alpha : ", num, pi, alpha);
    scanf("%d,%f,%c", &num, &pi, &alpha);

    // scanf("%d", &num);
    // scanf("%f", &pi);
    // scanf("%c", &alpha);

    printf(" num value is %d\n pi value is %.2f\n alpha value is %c", num, pi, alpha);

    // printf("num value is %d\n", num);
    // printf("pi value is %.2f\n", pi);
    // printf("char value is %c\n", alpha);
}