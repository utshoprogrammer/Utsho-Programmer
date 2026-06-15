#include <stdio.h>
#include <stdbool.h>
int main()
{
    int r, c;
    scanf("%d %d", &r, &c);
    int a[r][c];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]); // input array
        }
    }

    bool is_diagonal = true;

    if (r == c) // squre matrix check
    {
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                if (i + j == r - 1)   // row indx + column indx = row/column - 1
                {
                    // digonal secondary
                }
                else
                {
                    if (a[i][j] != 0)
                    {
                        is_diagonal = false;
                        printf("this is not secondary daigonal matrix");
                    }
                }
            }
        }
        if (is_diagonal == true)
        {
            printf("this is secondary daigonal matrix");
        }
    }
    else
    {
        printf("this is not secondary daigonal matrix");
    }
    return 0;
}