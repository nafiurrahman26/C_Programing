#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n],i,j,temp;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    //bubble calculation:
    int count=0,swap;
    for(i=0;i<n-1;i++){
        swap=0;
        for(j=0;j<n-1-i;j++){
            if(a[j]>a[j+1]){
                
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                swap++;
                count++;
            }
        }

        if(swap==0){
            break;
        }
    }

    printf("%d\n",count);
}