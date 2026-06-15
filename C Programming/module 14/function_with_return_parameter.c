// #include<stdio.h>

// // return_type function_name(parameter)
// // {
// //    instruction
// // }
// int sub(int num1,int num2)
// {
//     int ans = num1 - num2;
//     return ans;
// }
// int sum(int num1,int num2)  //retun type function name and(parameter)
// {
//     int ans = num1 + num2;  //instruction ans variable (num1+num2)
//     return ans;             //ans return 
// }
// int main()
// {
//     int a,b;
//     scanf("%d %d",&a,&b);    //user thaka input nita pare
//     int val = sum(a,b);      //return ans ka (val) name variable a raki
//     int val2 = sub(40,30);   //sorasore input nita pare
//     printf("%d %d",val,val2); 
//     return 0;
// }

//or deceleration for this function

#include<stdio.h>

int sum(int num1,int num2);  //retun type function name and(parameter)

int main()
{   
    int val = sum(30,20);   
    printf("%d",val); 
    return 0;
}
int sum(int num1,int num2)
{ 
    int ans = num1 + num2;  
    return ans;             
}