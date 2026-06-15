#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        int m1, m2, d;
        scanf("%d %d %d", &m1, &m2, &d);

        int result;

        for (int i = 0; i < t; i++)
        {
            result = m1 * d / (m1 + m2);
            result = d - result;
        }
        printf("%d\n", result);
    }

    return 0;
}