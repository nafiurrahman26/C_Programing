#include<stdio.h>
int main(){
    int count=0,n=5;
    for(int i=n;i>0;i/=2){
        for(int j=0;j<i;j++){
            count++;
        }
    }
    printf("%d",count);
}