#include <stdio.h>
int main()
{
    int a, b = 1;
    // a = 10;

    // if (++a)
    //     printf("%d", b);
    // else
    //     printf("%d", ++b);

    a = 1;
    b = 2;

    // if (a-- > 0 && ++b > 2)
    //     printf("Inside IF");

    // else
    //     printf("Inside else");

    // if (a-- > 0 || ++b > 2)
    // {
    //     printf("Inside If");
    // }
    // else
    // {
    //     printf("Inside else")
    // }

    // int number = 3;
    // printf("%d", 25 * (++number));

    a = 1;
    b = a++;
    int c = ++a;
    printf("This is B= %d Tis is C = %d This is is A = %d\n", b, c, a);

    int i, j;

    // for (i = 0; i <= 5; i++)
    // {
    //     printf("%d", i);
    //     i++;
    // }

    // for (i = 0; i <= 5; i--)
    // {
    //     printf("\n%d", i);
    //     i++;
    // }

    // for (i = 0; i <= 15; i += 2)
    // {
    //     printf("\n%d", i);
    //     if (i & 1)
    //         continue;

    //     i++;
    // }

    // for (i = 0; i < 5; i++)
    // {
    //     for (j = i; j <= 5; j++)
    //     {
    //         printf("%d\t%d\n", i, j);
    //     }
    // }

    // for (i = 0; i < 5; i++)
    // {
    //     for (j = i; j <= 5; j++)
    //     {
    //         if (i + j == 10)
    //         {
    //             break;
    //         }

    //         printf("%d\t%d\n", i, j);
    //     }
    // }
}