#include<stdio.h>
int main(){
    int array[]={1,2,4,8,16,32};
    int size=sizeof(array)/sizeof(array[0]);
    
    int t,p;
    scanf("%d%d",&t,&p);

    int exch=p-t;
    int ans=0;
    int k=size-1,count=0,coin=0;
    while(k>=0){
        if(array[k]<=exch){
            if(array[k]==2){
                ans++;
            }
            count=exch/array[k];
            exch=exch%array[k];
            // printf("Note of %d is %d \n",array[k],count);
            coin=coin+count;
        }
        k--;
    }
    // printf("Total Min note is : %d\n",coin);

    // if(exch!=0){
    //     printf("This is not exchang %d \n",exch);
    // }

    if(ans==1){
        printf("Yes\n");
    }else{
        printf("No\n");
    }
}
