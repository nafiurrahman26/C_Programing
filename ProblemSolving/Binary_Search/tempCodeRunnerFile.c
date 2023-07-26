int binary_search(int arr[100],int a);

// int binary_search(int arr[],int a){
//     int first=0,last=(arr.length)-1,mid;
//     while(last>=first){
//         mid=(first+last)/2;
//         if(a==arr[mid]){
//             return mid;
//         }
//         else if(a<arr[mid]){
//             first=mid-1;
//         }
//         else if(a>arr[mid]){
//             last=mid+1;
//         }
//     }
//     if(first>last){
//         printf("Searching elemint not existed!\n");
//     }
// }