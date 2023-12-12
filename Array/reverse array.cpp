#include<bits/stdc++.h>
using namespace std;
int main()

{
    int n;
    cout<<"Enter the size of n ";
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int s=0,e=n-1;
    while(s<e){
        swap(arr[s],arr[e]);
        s++,e--;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
