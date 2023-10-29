#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    int i;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int oddcount=0,evencount=0;
    for(i=0;i<n;i++){
        if(a[i]%2==0){
            evencount++;
        }
        if(a[i]%2!=0){
            oddcount++;
        }
    }
    if(evencount==n || oddcount==n){
        printf("Yes\n");
    }else{
        printf("No\n");
    }
}