#include<stdio.h>

long long fact(int n){
    if(n==0){
        return 1;
    }
    return n*fact(n-1);
}
int main(){
    int n;
    long long result;
    scanf("%d",&n);
    result=fact(n);
    printf("%lld\n",result);
}