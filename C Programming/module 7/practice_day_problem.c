// problem 1 sumation
// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     long long int a[n];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%lld", &a[i]);
//     }
//     long long int sum = 0;
//     for (int i = 0; i < n; i++)
//     {
//         sum += a[i];
//     }
//     if (sum<0)
//     {
//         sum *= -1;
//     }
//     printf("%lld",sum);
    
//     return 0;
// }
// // 2 number problem
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
//     int x;
//     scanf("%d", &x);
//     int indx = -1;

//     for (int i = 0; i < n; i++)
//     {
//         if (a[i] == x)
//         {
//             indx = i;
//             break;
//         }  
//     }
//     printf("%d",indx);

//     return 0;
// }
// 3 number problem
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
//     for (int i = 0; i < n; i++)
//     {
//         if (a[i]<=10)
//         {
//             printf("A[%d] = %d\n",i,a[i]);
//         }  
//     }
//     return 0;
//}
// problem 4
#include<stdio.h>
#include<limits.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int mini = INT_MAX;
    int indx;
    for (int i = 0; i < n; i++)
    {
        if (a[i]<mini)
        {
           mini = a[i];
           indx = i+1;
        }  
    }
    printf("%d %d",mini,indx);
    
    return 0;
}