class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
    //code
    sort(a.begin(), a.end());

        long long minDiff = INT_MAX;

        for (long long i = 0; i + m - 1 < n; i++) {
            long long diff  = a[i + m - 1] - a[i];      //Make a different variable we will get difrrent in this variable
            if(diff<minDiff)
            minDiff=diff;
        }

        return minDiff;
    
    }   
};     

logic understood    
https://www.youtube.com/watch?v=oDzjaNn-4tg&list=PLuAADu3OvBt50CW-c5xHGcqRlR-5L_Dnd&index=29
