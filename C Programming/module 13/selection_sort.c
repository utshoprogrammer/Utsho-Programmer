#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; i++)   //for input array value 
    {
        scanf("%d",&a[i]);      
    }
    
    for (int i = 0; i < n-1; i++)    
    {
        for (int j = i+1; j < n; j++)
        {
            if (a[i] > a[j])  //small to big  //if(a[i] < a[j]); big to small   
            {
                int temp = a[i];    //condition true tai swap this value
                a[i] = a[j];
                a[j] = temp;
            }         
        }    
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
   
    return 0;
}