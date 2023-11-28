class Solution
{
public:
    int findSum(int arr[], int n)
    {
        int ans = INT_MAX;
        int ans2 = INT_MIN;

        for (int i = 0; i < n; i++)
        {
            if (arr[i] < ans)
                ans = arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (arr[i] > ans2)
                ans2 = arr[i];
        }

        return ans + ans2;
    }
};


compilor code 
#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    
    int arr[6]= {15,30,2,3,6,8};
    int ans = INT_MAX;
    int ans2= INT_MIN;
    for(int i=0;i<5;i++){
        if(arr[i]<ans)
        ans=arr[i];
    }
    for(int i=0;i<5;i++){
    if(arr[i]>ans2){
        ans2=arr[i];
    }
    }
    cout<<"max value is "<<ans2<<endl;
    cout<<"min value is "<<ans;
}
