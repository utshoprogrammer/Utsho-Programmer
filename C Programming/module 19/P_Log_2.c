// #include<stdio.h>
// int main()
// {
//     long long int n;
//     scanf("%lld",&n);
//     long long int count = 0;

//     while (n > 1)
//     {
//         n/=2;  // 2 dara vag gala count++ haba log2(16) = 4 ans {we know = loga^a^n} = n*loga^a) = 4 
//         count++;
//     }
//     printf("%lld",count);
//     return 0;
// }

// or using recursion

#include<stdio.h>

int count = 0;
void fun(long long int n)
{
    if (n <= 1)
    {
        return;
    }
    fun(n/2);
    count++;
    
}
int main()
{
    long long int n;
    scanf("%lld",&n);
    fun(n);
    printf("%d",count);
    return 0;
}