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
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if(a[i]%2==0 && a[j]%2!=0)
            {
                count++;
            }
            else if(a[i]%2!=0 && a[j]%2==0)
            {
                count++;
            }
        }
    }
    printf("%d\n", count);

    return 0;
}