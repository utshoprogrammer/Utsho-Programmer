#include<stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    int a[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &a[i]);
    }
    int X, V;
    scanf("%d %d", &X, &V);
    a[X] = V;
    for (int i=N-1; i>=0; i--)
    {
        printf("%d ", a[i]);
    }
    return 0;
}