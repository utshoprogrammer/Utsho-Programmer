#include <stdio.h>
#include <limits.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int max = INT_MIN;
    int h;
    int l;
    for (int i = 0; i < n; )
    {
        for (int j = n - 1; j >= 0; )
        {
            if (a[i] < a[j])
            {
                h =  a[i];
                l = j-i;
                max = h*l;
                i++;
            }
            else if (a[i] > a[j])
            {
                h = a[j];
                l = j-1;
                max = h*l;
                j--;
            }
            else if(a[i] == a[j])
            {
                break;
            }    
        }
    }
    
    printf("%d",max);
    return 0;
}