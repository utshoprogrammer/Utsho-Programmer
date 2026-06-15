// problem 1
// #include<stdio.h>

// int my_abs(int x)
// {
//     int absculat = 0;
//     if (x>=0)
//     {
//         absculat = x;
//     }
//     else if(x<0)
//     {
//         absculat = -x;
//     }
//     return absculat;
// }
// int main()
// {
//     int x;
//     scanf("%d",&x);
//     int abs = my_abs(x);
//     printf("%d",abs);
//     return 0;
// }
//problem 2
// #include<stdio.h>

// int my_len(char s[])
// {
//     int count = 0;
//     for (int i = 0; s[i] != '\0'; i++)
//     {
//         count++;
//     }
//     return count;

// }
// int main()
// {
//     char s[1005];
//     scanf("%s",&s);
//     int count = my_len(s);
//     printf("%d",count);

//     return 0;
// }
//problem 3
// #include<stdio.h>

// int count_odd(int a[],int n) 
// {
//     int count = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (a[i]%2!=0)
//         {
//             count++;
//         }
//         else 
//         {
//             continue;
//         }
//     }
//     return count;
    
// }
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     int a[n];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d",&a[i]);
//     } 
//     int count = count_odd(a,n);

//     printf("%d",count);
//     return 0;
// }
//problem 4
// #include<stdio.h>

// void change_it(int a[],int n)
// {
//     a[n-1]=100;   
// }
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     int a[n];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     change_it(a,n);

//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ",a[i]);
//     }
       
//     return 0;
// }
//problem 5
#include<stdio.h>

void swap_it(int *x,int *y) 
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    swap_it(&x,&y);

    printf("%d %d",x,y);
    return 0;
}