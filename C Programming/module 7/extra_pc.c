// 1==problem
// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int ar[n];
//     for(int i=0;i<n;i++)
//     {
//         scanf("%d", &ar[i]);
//     }
//     int sum = 0;
//     for(int i=0;i<n;i++)
//     {
//         if(ar[i]%2==0)
//         {
//             sum += ar[i];
//         }
//     }
//     printf("%d",sum);
//     return 0;
// }
// 2==problem
// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int ar[n];
//     int odd = 0;
//     for(int i=0;i<n;i++)
//     {
//         scanf("%d", &ar[i]);
//     }
//     for(int i=0;i<n;i++)
//     {
//         if (ar[i]%2==1)
//         {
//             odd++;
//         }  
//     }
//     printf("%d",odd);

//     return 0;
// }
// 3==problem
// #include<stdio.h>
// #include<limits.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int ar[n];
//     int max = 0;
//     for(int i=0;i<n;i++)
//     {
//         scanf("%d", &ar[i]);
//     }
//     for(int i=0;i<n;i++)
//     {
//         if (ar[i]>max)
//         {
//             max = ar[i];
//         } 
//     }
//     printf("%d",max);
    
//     return 0;
// }
// 4==problem
#include<stdio.h>
#include<limits.h>
int main()
{
    int n;
    scanf("%d", &n);
    int ar[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d", &ar[i]);
    }
    int mini = INT_MAX;
    for(int i=0;i<n;i++)
    {
        if (ar[i]<mini)
        {
            mini = ar[i];
        } 
    }
    printf("%d",mini);

    return 0;
}