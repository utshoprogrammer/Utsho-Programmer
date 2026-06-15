#include<stdio.h>
int main()
{
    int x = 10;
    
    printf("%d\n",x);    //print only vlaue
    printf("%p\n",&x);    //print memory location 

    int* ptr;
    ptr = &x;
    *ptr = 20;     //pointer dea x ar value change (derefernce)
    printf("%d",x);   //print this changing value 
    //printf("%p\n",ptr);
    //printf("%p\n",&ptr);
    return 0;
}