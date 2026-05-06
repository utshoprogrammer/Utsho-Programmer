//problem 1
// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     int space = n-1;
//     int star = 1;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= space; j++)
//         {
//             printf(" ");
//         }
//         for (int j = 1; j <= star; j++)
//         {
//             printf("* ");
//         }
//         printf("\n");
//         space--;
//         star++;
//     }
    
//     return 0;
// }
//  problem  2
// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     int val = 1;
//     int space = n-1;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= space; j++)
//         {
//             printf(" ");
//         }
//         for (int j = 1; j <= val; j++)
//         {
//             printf("%d ",j);
//         }
//         printf("\n");
//         space--;
//         val++;
//     }
    
//     return 0;
// }
// problem 3
// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     int star = n;
//     int space = 1;
//     for (int i = 1; i <= n; i++)       //for printing lines 
//     {
//         for (int j = 1; j <= space; j++)    //for printing space 
//         {
//             printf(" ");
//         }
//         for (int j = 1; j <= star; j++)    //for printing star 
//         {
//             printf("*");
//         }
//         printf("\n");
//         star--;
//         space++;
        
//     }
    
//     return 0;
// }

// problem 4

// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     int star = n;
//     int space = 1;
//     for (int i = 1; i <= n; i++)       //for printing lines 
//     {
//         for (int j = 1; j <= space; j++)    //for printing space 
//         {
//             printf(" ");
//         }
//         for (int j = 1; j <= star; j++)    //for printing star 
//         {
//             printf("* ");
//         }
//         printf("\n");
//         star--;
//         space++;       
//     }   
//     return 0;
// }
// problem 5
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int alpha = 65;
    
    for (int i = 1; i <= n; i++)
    {
        for (int j = 65; j <= alpha; j++)
        {
            printf("%c ",j);
        }
        printf("\n");
        alpha++;
        
    }
    
    return 0;
}