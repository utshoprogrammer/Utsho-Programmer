// #include<stdio.h>

// void sum(int a,int b)       //no retun type function name and(parameter)
// {
    
//     int ans = a + b;     //instruction ans variable (num1+num2)
//     printf("%d",ans);              //ans print
// }
// int main()
// {
//     int a,b;
//     scanf("%d %d",&a,&b);
//     sum(a,b);   //sum function ka call korba
    
//     return 0;
// }

#include<stdio.h>

void sum(int a,int b)       //no retun type function name and(parameter)
{
    
    int ans = a + b;
    return;   //void laker poro jodi return kore toba seati break ar moto kaj korba      
    printf("%d",ans);  //ai line ar agai break haba and main function return korba     
}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    sum(a,b);   //sum function ka call korba
    
    return 0;
}
