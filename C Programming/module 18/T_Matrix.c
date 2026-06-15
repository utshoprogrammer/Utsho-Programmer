#include <stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    scanf("%d", &n);
    int array[n][n];
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d",&array[i][j]);
        }
        
    }
    int primary = 0; 
    int secondary = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                primary += array[i][j];
            }
            if (i+j == n-1)
            {
                secondary += array[i][j];
            }           
        }       
    }
    int ans = abs(primary - secondary);
    printf("%d",ans);
    return 0;
}
