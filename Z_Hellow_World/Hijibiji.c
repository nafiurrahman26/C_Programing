#include<stdio.h>
int main(){
    int i,j,k=0;
    int n=10;
    for(i=n/2;i<=n;i++){
         printf("\n\nI= %d \n",i);
        for(j=2;j<=n;j=j*2){
            printf("J= %d \n",j);
            k=k+(n/2);
            printf("K= %d \n",k);
        }
       
    }
    printf("\n\ntotal K= %d \n",k);
}

