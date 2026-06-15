#include<stdio.h>

void fun(int x)  //ai x and min() ar x diffrent variable 
{
    x = 20;
    //printf("fun function ar address:%p\n",&x);
}
int main()
{
    int x = 10;
    fun(x);       //ai x ja value pass kora tai pass by value 
    
    printf("%d",x);  //output ar value na change hower karon fun() a x ar value and main() a x ar value vinno
   // printf("main function ar address:%p\n",&x);
    return 0;
}