// problem 1
// #include<stdio.h>

// void fun(int i,int n)
// {
//     if (i == n)
//     {
//         return;
//     }
//     printf("I love Recursion\n");
//     fun(i+1,n);
// }
// int main()
// {
//     int n;
//     scanf("%d",&n); 
//     fun(0,n);
//     return 0;
// }

//problem 2

// #include<stdio.h>

// void fun(int i,int n)
// {
//     if (i > n)
//     {
//         return;
//     }
//     printf("%d\n",i);
//     fun(i+1,n);
// }
// int main()
// {
//     int n;
//     scanf("%d",&n); 
//     fun(1,n);
//     return 0;
// }

// problem 3

// #include<stdio.h>

// void fun(int i,int n)
// {
//     if (i == n)
//     {
//         printf("%d",i);
//         return;
//     }
//     printf("%d ",i);
//     fun(i-1,n);
    
// }
// int main()
// {
//     int n;
//     scanf("%d",&n); 
//     fun(n,1);
//     return 0;
// }

// problem 4

#include<stdio.h>

void fun(int a[],int n,int i)
{
    if (i == n)
    {
        return;
    }
    fun(a,n,i+1);
    if(i%2==0)
        printf("%d ",a[i]);
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }     
    fun(a,n,0);
    return 0;
}