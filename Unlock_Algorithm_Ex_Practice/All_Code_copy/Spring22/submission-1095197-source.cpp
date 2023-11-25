#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,max,count=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    max=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]>=max)
        {
            max=arr[i];
            count=i;
        }
    }
    cout<<count+1<<endl;
    return 0;
}
