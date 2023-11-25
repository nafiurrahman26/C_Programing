int partition(int a[],int lb,int ub){
//     int pivot=a[lb],start=lb,end=ub,temp;

//     do{
//         while(a[start]<=pivot){
//             start++;
//         }
//         while(a[pivot]<a[end]){
//             end--;
//         }
//         if(end>start){
//             temp=a[start];
//             a[start]=a[end];
//             a[end]=temp;
//         }
//     }while(end>start);

//     temp=a[lb];
//     a[lb]=a[end];
//     a[end]=temp;

//     return end;
// }