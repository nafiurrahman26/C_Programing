#include<stdio.h>
int main(){
    int n,i,count=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max=arr[0];
    for(i=0;i<n;i++){
        if(arr[i]>=max){
            max=arr[i];
            count=i;
        }
    }
    printf("%d\n",count+1);

    return 0;
}

#include <stdio.h>

int main() {
    int n, max, count = 0;
    scanf("%d", &n);
    int arr[n];
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    max = arr[0];
    
    for (int i = 0; i < n; i++) {
        if (arr[i] >= max) {
            max = arr[i];
            count = i;
        }
    }
    
    printf("%d\n", count + 1);
    
    return 0;
}
