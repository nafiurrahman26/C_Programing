#include<stdio.h>
int main(){
    int a,*p;
    a=10;
    p=&a;
    printf("%d\n",a);
    printf("%p\n",p);
    printf("%d\n",*p);

    return 0;
}