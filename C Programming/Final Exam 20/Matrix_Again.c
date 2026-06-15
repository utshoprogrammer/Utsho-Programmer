#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int a[n][m];
    for (int i = 0; i < n; i++)  //iput row and column
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d",&a[i][j]);
        }    
    }
    //print row
    int spac_r = n - 1;
    for (int i = 0; i < m; i++) 
    {
        printf("%d ",a[spac_r][i]);
    }
    printf("\n"); 
    // print column 
    int spac_c = m-1;
    for (int j = 0; j < n; j++)
    {
        printf("%d ",a[j][spac_c]);
    }
    
    return 0;
}