#include<stdio.h>

void sum()      
{
    int a,b;
    scanf("%d %d",&a,&b); 

    int ans = a + b;           
    printf("%d",ans);    
}
int main()
{   
    sum();   //sum function ka call korba
    
    return 0;
}