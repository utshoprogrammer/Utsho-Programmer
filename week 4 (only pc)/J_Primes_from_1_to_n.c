#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int is_prime = 0;
    for (int i = 1; i < n; i++)
    {
        for (int j = 2; j < n; j++)
        {
            if (i%j == 0)
            {
                continue;                
            }
            else
            {
                is_prime = i;
            }          
        }           
    }
    printf("%d ",is_prime);
    return 0;
}