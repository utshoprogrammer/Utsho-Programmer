// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int a[n];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &a[i]);
//     }
//     int count0=0,count1=0,count2=0,count3=0,count4=0,count5=0;
//     for (int i = 0; i < n; i++)
//     {
//         if (a[i]==0)
//         {
//             count0++;
//         }
//         else if (a[i]==1)
//         {
//             count1++;
//         }
//         else if (a[i]==2)
//         {
//             count2++;
//         }
//         else if (a[i]==3)
//         {
//             count3++;
//         }
//         else if (a[i]==4)
//         {
//             count4++;
//         }
//         else if (a[i]==5)
//         {
//             count5++;
//         }
//     }
//     printf("%d -> %d\n",0,count0);
//     printf("%d -> %d\n",1,count1);
//     printf("%d -> %d\n",2,count2);
//     printf("%d -> %d\n",3,count3);
//     printf("%d -> %d\n",4,count4);
//     printf("%d -> %d\n",5,count5);
    
//     return 0;
// }
//improve frequency array
// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int a[n];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &a[i]);
//     }
//     int fre[6] = {0};
//     for (int i = 0; i < n; i++)
//     {
//         if (a[i]==0)
//         {
//             fre[0]++;
//         }
//         else if (a[i]==1)
//         {
//             fre[1]++;
//         }
//         else if (a[i]==2)
//         {
//             fre[2]++;
//         }
//         else if (a[i]==3)
//         {
//             fre[3]++;
//         }
//         else if (a[i]==4)
//         {
//             fre[4]++;
//         }
//         else if (a[i]==5)
//         {
//             fre[5]++;
//         }
//     }
//     printf("%d -> %d\n",0,fre[0]);
//     printf("%d -> %d\n",1,fre[1]);
//     printf("%d -> %d\n",2,fre[2]);
//     printf("%d -> %d\n",3,fre[3]);
//     printf("%d -> %d\n",4,fre[4]);
//     printf("%d -> %d\n",5,fre[5]);
    
//     return 0;
// }
//more improve frecuency array
#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int fre[6] = {0};
    for (int i = 0; i < n; i++)
    {
        fre[ a[i] ]++;
        // int val = a[i];
        // fre[val]++;                 
    }
    for (int i = 0; i < 6; i++)
    {
        printf("%d -> %d\n",i,fre[i]);

    }
     
    return 0;
}