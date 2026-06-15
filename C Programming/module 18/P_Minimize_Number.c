#include<stdio.h>
#include<limits.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }

    int min_count = INT_MAX;

    for (int i = 0; i < n; i++)  //proteti new number alada vaba zero thaka count
    {
        int count = 0;
        int num = a[i];  //alada variable a rakhobo

        while (num % 2 ==0)  //even check 
        {
            num = num /2;  //if even hay count++ karbo
            count++;
        }
        if (count < min_count) //count number < min_number min_connt =count
        {
            min_count = count;
        }   
    }
    printf("%d",min_count);
    
    return 0;
}