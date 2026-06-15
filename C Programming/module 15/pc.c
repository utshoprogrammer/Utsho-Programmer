// #include<stdio.h>

// void swap(int*p,int*q)
// {
//     int temp = *p;
//     *p = *q;
//     *q = temp;
// }
// int main()
// {
//     int a = 6; int b = 5;
//     swap(&a,&b);
//     printf("%d %d\n",a, b);
//     return 0;
// }

// #include<stdio.h>

// void m(int*p)
// {
//     int i= 0;
//     for (int i = 0; i < 5; i++)
//     {
//         printf("%d ",p[i]);
//     }
    
// }
// int main()
// {
//     int a[5] ={6,5,3};
//     m(a);
//     return 0;
// }

// #include<stdio.h>

// void m(int p,int q)
// {
//     int temp = p;
//     p = q;
//     q = temp;
// }
// int main()
// {
//     int a = 6; int b = 5;
//     m(a,b);
//     printf("%d %d\n",a, b);
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int ary[4] = {1,2,3,4};
//     printf("%d\n",*ary);
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int ary[4] = {1,2,3,4};
//     int *p;
//     p = ary + 3;
//     *p = 5;
//     printf("%d\n",ary[3]);
    
// }

// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char s[1005];
//     scanf("%s",&s);
//     int len = strlen(s);
//     int flag = 1;
//     for (int i = 0,j=len-1; i < len,j>=0; i++,j--)
//     {
//         if (s[i]!=s[j])
//         {            
//             flag = 0;
//             printf("NO");
//             break;
//         }
        
//     }
//     if (flag == 1)
//     {
//         printf("YES");
//     }
//     return 0;
// }