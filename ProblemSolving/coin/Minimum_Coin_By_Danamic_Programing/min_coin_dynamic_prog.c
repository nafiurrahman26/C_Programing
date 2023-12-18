#include<stdio.h>
void table(int aa[][11],int i,int j){
    int x,y;
    printf("Display the Table: \n");
    for(x=0;x<i;x++){
        for(y=0;y<j;y++){
            printf("%d ",aa[x][y]);
        }
        printf("\n");
    }
    printf("\n");
}

int main(){
    int coin[]={1,5,6,9};
    int coin_size=sizeof(coin)/sizeof(coin[0]);
    int w=10;
    int i=5,j=11;
    int a[i][j];
    int x,y;  
    for(x=0;x<i;x++){
        for(y=0;y<j;y++){
            a[x][y]=0;
        }
    }
    table(a,i,j);
    for(x=0;x<i;x++){
        a[x][0]=1;
    }
    table(a,i,j);
    for(i=0;i<=coin_size;i++){
        for(j=0;j<=w;j++){
            if(coin[i]>j){
                a[i][j]=a[i-1][j];
            }else{
                a[i][j]=a[i-j][j];
            }
        }
    }
    table(a,i,j);
}
//.........unsolved.......