#include<stdio.h>
int coinchange(int a[],int n,int value){
    int arr[n+1][value+1];
    int i,j;
    for(i=0;i<n+1;i++){ //row
        for(j=0;j<value+1;j++){
            if(j==0){
                arr[i][j]=0;
            }else if(i==0 && j!=0){
                arr[i][j]=9999;//infinity
                //...
                if(a[i]>j){
                    arr[i][j]=arr[i-1][j];
                }else{
                   // arr[i][j]=min(arr[i-1][j],1+arr[i][j-a[i]]);
                   if(arr[i-1][j]>=arr[i][j-a[i]]){
                        arr[i][j]=arr[i][j-a[i]];
                   }else{
                        arr[i][j]=arr[i-1][j];
                   }
                }
            }
        }
    }
    return arr[n][value];
}

int main(){
    int n,i;
    printf("How  many coin: ");
    scanf("%d",&n);
    int a[n];
    printf("Insert all coin: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    //ecxhang value
    int value;
    printf("Enter exchang value: ");
    scanf("%d",&value);
    int result;
    result= coinchange(a,n,value);
    printf("%d",result);
}