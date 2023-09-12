#include<stdio.h>
int main(){
    int group[]={5,2,3,6,1,2};
    int a_size=sizeof(group)/sizeof(group[0]);
    printf("%d \n",a_size);
    int bin_size=8;
    int count=1,i=0,j=0;
    while(j<a_size && i<a_size){
        if(bin_size>=group[i]){
            bin_size=bin_size-group[i];
            i++;
        }else{
            count++;
            j++;
            bin_size=8;
        }
        
    }
    printf("%d",count);
}