#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[5][5];
    int r, c;
    int mid_r = 2;
    int mid_c = 2;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            scanf("%d", &a[i][j]);
            if (a[i][j] == 1)
            {
                r = i;
                c = j;
            }
        }
    }
    int move_x = abs(mid_r - r);
    int move_y = abs(mid_c - c);
    printf("%d\n", move_x + move_y);

    return 0;
}