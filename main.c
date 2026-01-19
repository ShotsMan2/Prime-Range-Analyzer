#include <stdio.h>
#include <stdlib.h>

int main()
{
    int s1, s2, i, sum, j, asal;

    printf("1. sayi gir");
    scanf("%d", &s1);

    printf("2. sayi gir");
    scanf("%d", &s2);

    sum = 0;

    if (s1 > s2)
    {
        for (i = 2; i < s1; i++)
        {
            if (s2 < i)
            {
                asal = 1;
                for (j = 2; j <= i / 2; j++)
                {
                    if (i % j == 0)
                    {
                        asal = 0;
                    }
                }
                if (asal == 1)
                {
                    sum += 1;
                }
            }
        }
        printf("asal adet:%d", sum);
    }
    else if (s2 > s1)
    {
        for (i = 2; i < s2; i++)
        {
            if (s1 < i)
            {
                asal = 1;
                for (j = 2; j <= i / 2; j++)
                {
                    if (i % j == 0)
                    {
                        asal = 0;
                    }
                }
                if (asal == 1)
                {
                    sum += 1;
                }
            }
        }
        printf("asal adet:%d", sum);
    }
    else if (s1 == s2)
    {
        printf("0\n");
    }
}
