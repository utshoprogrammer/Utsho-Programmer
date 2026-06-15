//problem 1
// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     int star = n;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= star; j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//         star--;
//     }
    
//     return 0;
// }
//function problem 
// #include<stdio.h>

// void num()
// {
//     int x;
//     scanf("%d",&x);
//     if (x%2==0)
//     {
//         printf("Even");
//     }
//     else 
//     {
//         printf("Odd");
//     }
// }
// int main()
// {
//     num();
//     return 0;
// }
// function problem 
// #include<stdio.h>

// void num(int x)
// {
    
//     if (x%2==0)
//     {
//         printf("Even");
//     }
//     else 
//     {
//         printf("Odd");
//     }
// }
// int main()
// {
//     int x;
//     scanf("%d",&x);
//     num(x);
//     return 0;
// }
// function problem 
// #include<stdio.h>

// int num(int x)
// {
    
//     if (x%2==0)
//     {
//         printf("Even");
//     }
//     else 
//     {
//         printf("Odd");
//     }
    
// }
// int main()
// {
    
//     num(46);
//     return 0;
// }
// function problem 
#include<stdio.h>

int sum()       //retun type function name and(no parameter)
{
    int x;
    scanf("%d",&x);
    char ans = 0;
    if (x%2==0)
    {
       
    }
    
    
    return ans;              
}
int main()
{
    int val = sum(); 
    printf("%d",val); 
    return 0;
}