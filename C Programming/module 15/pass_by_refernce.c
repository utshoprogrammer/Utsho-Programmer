#include<stdio.h>

void fun(int* p)  //ai x and min() ar x diffrent variable 
{
    *p = 20;
    
}
int main()
{
    int x = 10;
    fun(&x);       //ai x ja value pass kora tai pass by value 
    
    printf("%d",x);  //output ar value na change hower karon fun() a x ar value and main() a x ar value vinno
    
    return 0;
}