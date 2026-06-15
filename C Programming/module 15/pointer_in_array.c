// #include<stdio.h>
// int main()
// {
//     int a[5] = {10,20,30,40,50};
//     printf("array indx 0 ar address:%p\n",&a[0]); //array index 0 address
//     printf("array a :%p\n",a);   //a[0] address == array
//     printf("array value :%d\n",*a);  //dereference kora 
//     return 0;
// }

#include<stdio.h>
int main()
{
    int a[5] = {10,20,30,40,50};
    *(a + 1) = 100;
    for (int i = 0; i < 5; i++)
    {
        printf("%d ",a[i]);
    }
    
    return 0;
}