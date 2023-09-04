#include<stdio.h>
void maxprofit_display(float a[],int size){
    int i;
    for(i=0;i<size;i++){
        printf("%.2f ",a[i]);
    }
    printf("\n ");
}
void display(int a[],int size){
    int i;
    for(i=0;i<size;i++){
        printf("%d ",a[i]);
    }
    printf("\n ");
}
int  main(){
    int weight[]={5,5,3,2};
    int profit[]={3,4,5,6};
    int wsize=sizeof(weight)/sizeof(weight[0]);
    float pw[wsize];
    int i;
    for(i=0;i<wsize;i++){
        pw[i]=(float)profit[i]/weight[i];
    }
    maxprofit_display(pw,wsize);

    //sorting
    int size=sizeof(pw)/sizeof(pw[0]);
    int max_index,j;
    for(i=0;i<size;i++){
        max_index=i;
        for(j=i+1;j<size;j++){
            if(pw[j]>pw[ max_index]){
                max_index=j;
            }
        }
        float temp=pw[i];
        pw[i]=pw[max_index];
        pw[max_index]=temp;
    //swap profit;
        int temp2;
        temp2=profit[i];
        profit[i]=profit[max_index];
        profit[max_index]=temp2;

        //swap weight
        temp2=weight[i];
        weight[i]=weight[max_index];
        weight[max_index]=temp2;
    }
    //swap complete
  //  maxprofit_display(pw,wsize);
  display(weight,size);
  display(profit,size);


  int capacity=5;

  printf("Taken \n");
  int maxp=0,maxw=0,top=0;
    while(capacity>maxw){
        if(capacity>=weight[top]){
           maxw=maxw+weight[top];
        maxp=maxp+profit[top];
        
        printf("taken weight : %d\n",weight[top]);
        printf("taken profit: %d\n",profit[top]);
        printf("\nTotal profit %d and total weight %d \n",maxp,maxw);
        printf("\n");
        top++;  
        }
       
    }


//   printf("\nMaximum profit is : %d",maxp);


}

// float weight[]={2,3,5,7,1,4,1};
//     float profit[]={10,5,15,7,6,8,3};