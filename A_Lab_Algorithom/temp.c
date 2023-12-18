#include<stdio.h>
void swap(int *a,int *b)
{
int tem=*a;
*a=*b;
*b=tem;
}
int main()
{
int num1,num2;
printf("enter two integer number:\n");
scanf("%d%d",&num1,&num2);
swap(&num1,&num2);
printf("num1:%d\n",num1);
printf("num2:%d\n",num2);
return 0;
}