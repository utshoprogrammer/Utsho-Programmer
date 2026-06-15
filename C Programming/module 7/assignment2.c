// problem 1
// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     for(int i=1;i<=n;i++)
//     {
//         printf("%d. I Want More Assignments\n",i);
//     }
//     return 0;
// }
// problem 2
// #include<stdio.h>
// int main()
// {
//     int N;
//     scanf("%d", &N);
//     if (N>0)
//     {
//         for(int i=1;i<=N;i++)
//         {
//             printf("%d ",i);
//         }
//     }
//     else
//     {
//         for(int i=N;i<=0;i++)
//         {
//             printf("%d ",i);
//         }
//     }
//     return 0;
// }
// problem 3
// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int a[n];
//     for(int i=0;i<n;i++)
//     {
//         scanf("%d", &a[i]);
//     }
//     for(int i=n-1;i>=0;i--)
//     {
//         if (i%2==1)
//         {
//             printf("%d ",a[i]);
//         }
//     }
//     return 0;
// }
// problem 4
// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int v[n];

//     for(int i=0;i<n;i++)
//     {
//         scanf("%d", &v[i]);
//     }
//     int sum = 0;
//     int sum1 = 0;
//     for(int i=0;i<n;i++)
//     {
//         if (v[i]>0)
//         {
//             sum += v[i];
//         }
//         if (v[i]<0)
//         {
//             sum1 += v[i];
//         }
//     }
//     printf("%d ", sum);
//     printf("%d ", sum1);
//     return 0;
// }
// problem 5
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int x, v;
    scanf("%d %d", &x, &v);
    a[x] = v;

    for (int i = n-1; i >= 0; i--)
    {
        printf("%d ", a[i]);
    }
    
    return 0;
}