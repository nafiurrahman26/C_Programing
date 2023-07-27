#include<stdio.h>
int factorial(int i);

int main(){
    int a,fac;
    printf("Enter a integer number: ");
    scanf("%d",&a);
    fac=factorial(a);
    printf("Factorial of %d is: %d\n",a,fac);
}
int factorial(int i){
    if(i<=1){
        return 1;
    }
    return i+factorial(i-1);
}
