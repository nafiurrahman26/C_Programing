#include<stdio.h>
int main(){
    int testCase,count=0;
    scanf("%d",&testCase);
    while(count<testCase){
        // printf("Case %d\n",count+1);
        int n,m;
        scanf("%d%d",&n,&m);
        int i,j;
        int array1[n],array2[m],newarray[m+n];
        for(i=0;i<n;i++){
            scanf("%d",&array1[i]);
            newarray[i]=array1[i];
        }

        for(i=0;i<m;i++){
            scanf("%d",&array2[i]);
            newarray[n+i]=array2[i];
        }

        

        int size=sizeof(newarray)/sizeof(newarray[0]);
        int temp;
        //sorting the new array:
        
        for(i=0;i<size-1;i++){
           
            for(j=0;j<size-1-i;j++){
                if(newarray[j]<newarray[j+1]){
                    temp=newarray[j];
                    newarray[j]=newarray[j+1];
                    newarray[j+1]=temp;
                    
                }
                
            }
        }

        //print:
        for(i=0;i<m+n;i++){
            printf("%d ",newarray[i]);
        }
        printf("\n");
        count++;
    }
    

}