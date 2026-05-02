// #include<stdio.h>
// int main()
// {
//     int i=1;
//     while(i<=10)
//     {
//         printf("%d\n", i);
//         i++;

//     }
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int i=5;
//     while(i<10)
//     {
//         printf("i ");
//         i++;

//     }
//     return 0;
// }

 #include<stdio.h>
int main()
{
    int i;
    int n;
    scanf("%d", &i);
    scanf("%d", &n);
    int sum = 0;
    while(i<=n)
    {
        sum = sum + i;
        i++;
    }
    pritf("%d", sum);
    return 0;
}