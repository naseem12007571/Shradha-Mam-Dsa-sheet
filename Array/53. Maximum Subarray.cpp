class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        

     int sum=0;
     int larg= nums[0];
     for(int i=0;i<nums.size();i++){
         sum=sum+nums[i];
         larg= max(larg,sum);
         if(sum<0)
         sum=0;
     }
     return larg;

    }
};
