#include<stdio.h>
#include<limits.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    int result;
    for (int i = 0,j=n-1; i < n,j<=0; i++,j--)
    {
        if (a[i] < a[j])
        {
            result = a[i];
        }
        else if (a[i] > a[j])
        {
            result = a[j];
        }
        else
        {
            result = a[i];
        }
              
    }
    printf("%d",a[result]);
    
    return 0;
}