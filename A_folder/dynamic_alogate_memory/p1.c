#include<stdio.h>
#include<stdlib.h>
int main(){
    int *p,n=10,i;
    p=(int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++){
        p[i]=i;
    }
    for(i=0;i<n;i++){
        printf("%d\n",p[i]);
    }
}
