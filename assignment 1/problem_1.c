// #include<stdio.h>
// int main() {
//     printf("Hello, world! I am learning C programming language. ^_^\n");
//     printf("Programming is fun and challenging. /\\/\\/\\\n");
//     printf("I want to give my 100%% dedication to learn!\tI will succeed one day.\n");
    
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int A;
//     int B;
//     scanf("%d %d",&A,&B);
//     if (A>=B)
//     {
//         printf("Yes");
//     }
//     else
//     {
//         printf("No");
//     }
    
//     return 0;
// }

#include<stdio.h>
int main()
{
    int A;
    int B;
    scanf("%d %d",&A, &B);
    if (A%B==0||B%A==0)
    {
        printf("Multiples");
    }
    else
    {
        printf("No Multiples");
    }
    return 0;
}