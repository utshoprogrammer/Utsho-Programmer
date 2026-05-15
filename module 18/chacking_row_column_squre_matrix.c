#include<stdio.h>
int main()
{
    int r,c;
    scanf("%d %d",&r,&c);
    int a[r][c];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d",&a[i][j]);
        }     
    }
    // if (r==1)
    // {
    //     printf("this is row matrix");
    // }
    // else
    // {
    //     printf("this not row matrix");
    // }
    // if (c==1)
    // {
    //     printf("this is column matrix");
    // }
    // else
    // {
    //     printf("this not column matrix");
    // }
    if (r==c)
    {
        printf("this is squre matrix");
    }
    else
    {
        printf("this not squre matrix");
    }

    return 0;
}