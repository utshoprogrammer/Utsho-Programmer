#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);        //first intput array
    }
    int m;
    scanf("%d", &m);
    int b[m];
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &b[i]);        //second input array
    }

    int c[n+m];
    for (int i = 0; i < n; i++)     //copying first array 
    {
        c[i] = a[i];
    }

    for (int i = 0; i < m; i++)     //copying second array
    {
        c[i+n] = b[i];
    }

    for (int i = 0; i < n+m; i++)   //printing after copy array
    {
        printf("%d ",c[i]);
    }
    return 0;
}