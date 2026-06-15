#include<stdio.h>

int sum()       //retun type function name and(no parameter)
{
    int a,b;
    scanf("%d %d",&a,&b); //int a=30,b=20;  //user input 
    int ans = a + b;     //instruction ans variable (num1+num2)
    return ans;             //ans return 
}
int main()
{
    int val = sum();   //ans return kora val ar modda raki
    printf("%d",val); 
    return 0;
}
