//unit matrix 
// #include <stdio.h>
// int main()
// {
//     int n, m;
//     scanf("%d %d", &n, &m);
//     int a[n][m];
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             scanf("%d", &a[i][j]);
//         }
//     }
//     int flag = 1;
//     if (n == m)
//     { 
//         for (int i = 0; i < n; i++)
//         {
//             for (int j = 0; j < m; j++)
//             {
//                 if (i == j)
//                 {
//                     if (a[i][j] != 1)
//                     {
//                         flag = 0;                       
//                     }        
//                 }
//                 else
//                 {
//                     if (a[i][j]!= 0)
//                     {
//                         flag = 0;
//                     }
                    
//                 }
//             }
//         }
//         if (flag == 1)
//         {
//             printf("this is unit matrix");
//         }
//         else 
//         {
//             printf("this is not unit matrix");
//         }
//     }
//     else
//     {
//         printf("this is not unit matrix");
//     }
//     return 0;
// }

//scalar matrix 

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
    if (n == m)
    { 
        int re = a[0][0]; 
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (i == j)
                {
                    if (a[i][j]!=re)
                    {
                        flag = 0;                       
                    }        
                }
                else
                {
                    if (a[i][j]!= 0)
                    {
                        flag = 0;
                    }
                    
                }
            }
        }
        if (flag == 1)
        {
            printf("this is scalar matrix");
        }
        else 
        {
            printf("this is not scalar matrix");
        }
    }
    else
    {
        printf("this is not scalar matrix");
    }
    return 0;
}