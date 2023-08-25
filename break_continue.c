#include <stdio.h>
int main()
{
    int j;
    int k;
    int value;

    printf("Press 1 for continue cheak. \nAnd Press 2 for break cheak.\n ~");
    scanf("%d", &value);

    printf("enter the value for you want to run :");
    scanf("%d", &k);

    printf("enter the value for contiue :");
    scanf("%d", &j);

    switch (value)
    {
    case 1:
        for (int i = 1; i <= k; i++)
        {
            if (i == j)
            {
                printf("\n");
                continue;
            }

            else
            {
                printf("%d\n", i);
            }
        }
        break;

    case 2:
        for (int i = 1; i <= k; i++)
        {
            if (i == j)
            {
                printf("\n");
                break;
            }

            else
            {
                printf("%d\n", i);
            }
        }
        break;

    default:
        printf("Not valid value.");
        break;
    }
}