#include <stdio.h>
int main()
{
    // const float pi = 3.14;

    // printf("enter the value for pi : ");
    // scanf("%f", &pi);

    // printf("pi value is : %.2f\n", pi);

    // const float pi2 = 3.14;

    // printf("pi value is : %.2f", pi2);

    // double pi;
    float pi;

    printf("enter the value for pi : ");
    scanf("%f", &pi);

    float pi2 = 3.14;

    if (pi == pi2)
    {
        printf("pi value is right");
    }
    else
    {
        printf("pi value is rong. right pi value is 3.14");
    }
}