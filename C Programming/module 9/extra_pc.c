// problem 1
// #include <stdio.h>
// #include <limits.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int a[n];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &a[i]);
//     }

//     int mini_indx = 0;
//     int max_indx = 0;

//     for (int i=0; i < n; i++)
//     {
//         if (a[i] < a[mini_indx])
//         {
//             mini_indx = i;
//         }
//         if (a[i] > a[max_indx])
//         {
//             max_indx = i;
//         }
//     }
//     int tmp = a[mini_indx];
//     a[mini_indx] = a[max_indx];
//     a[max_indx] = tmp;

//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ", a[i]);
//     }
//     return 0;
// }
// problem 2
// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int a[n];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &a[i]);
//     }
//     int i = 0;
//     int j = n-1;
//     while (i<j)
//     {
//         int tmp = a[i];
//         a[i] = a[j];
//         a[j] = tmp;
//         i++;
//         j--;
//     }
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ", a[i]);
//     }
//     return 0;
// }
// problem 3
// #include <stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int a[n];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &a[i]);
//     }
//     int i = 0;
//     int j = n - 1;
//     while(i<j)
//     {
//         if(a[i]!=a[j])
//         {
//             printf("NO");
//             return 0;
//         }
//         i++;
//         j--;
//     }
//     printf("YES");

//     return 0;
// }
// problem 4
#include <stdio.h>
#include<limits.h>
int main()
{
    int t;
    scanf("%d", &t);

    for (int k = 0; k < t; k++)
    {
        int n;
        scanf("%d", &n);
        int a[n+1];

        for (int i = 1; i <= n; i++)
        
            scanf("%d", &a[i]);
        

        int mini = INT_MAX;
        for (int i = 1; i <= n; i++)
        {
            for (int j = i+1; j <= n; j++)
            {
                if (a[i]+a[j]+j-i < mini)
                {
                    mini = a[i]+a[j]+j-i;
                }   
            }   
        }
        printf("%d\n",mini);    
    }
    return 0;
}