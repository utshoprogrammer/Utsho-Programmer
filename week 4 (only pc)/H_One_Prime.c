#include<stdio.h>
#include<stdbool.h>
int main()
{
    int x;
    scanf("%d",&x);
    bool is_prime = true;
    for (int i = 2; i < x; i++)
    {
        if (x%i == 0)
        {
            is_prime = false;
        }       
    }
    if(is_prime == true)
    {
        printf("YES\n");
    }
    else if(is_prime == false)
    {
        printf("NO\n");
    }
    return 0;
}