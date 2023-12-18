#include<stdio.h>
void swap(int *n1,int *n2){
    int temp;
    temp=*n1;
    *n1=*n2;
    *n2=temp;
}
int main(){
    int n1=10,n2=20;
    printf("N1 is: %d and N2 is: %d\n",n1,n2);
    swap(&n1,&n2);
    printf("N1 is: %d and N2 is: %d\n",n1,n2);
}