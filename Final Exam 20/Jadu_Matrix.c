#include <stdio.h>
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    int flag = 1;

    if (n == m) //check row == column 
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++) //if true 
            {
                if (i==j || i+j==n-1)  //primary and secondary diagonal check
                {
                    if(a[i][j]!=1)
                    {
                        flag = 0;
                    }                   
                }
                else
                {
                    if (a[i][j]!=0)  // check primary and secondary diagonal bada all elemet 0 ke na
                    {
                        flag = 0;
                    }       
                }    
            }
        }
        if (flag == 1)
        {
            printf("YES");
        }
        else
        {
            printf("NO");
        }    
    }
    else
    {
        printf("NO");
    }
    return 0;
}