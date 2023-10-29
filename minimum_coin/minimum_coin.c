#include<stdio.h>
int main(){
    //taka nilam
    int tk;
    printf("Enter the amount: ");
    scanf("%d",&tk);

    //exchang coin nilam
    printf("Enter how many coin do you want: ");
    int n;
    scanf("%d",&n);
    int a[n];
    printf("Enter all coin: ");
    int i,j;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    //sorting korlam decending
    int temp;
    for(i=0;i<n-1;i++){
        for(j=0;j<n-1-i;j++){
            if(a[j]<a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    int k=0,count=0,coin=0;
    while(k<n){
        if(a[k]<=tk){
            count=tk/a[k];
            tk=tk%a[k];
            coin=coin+count;
        }
        k++;
        
    }

    printf("Total min coin is: %d\n",coin);
    if(tk!=0){
        printf("Not exchang is %d Taka\n",tk);
    }
}