class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int runningsum = 0;
        int res=INT_MIN;
        for(int i=0;i<nums.size();i++){
          runningsum+=nums[i];
          res=max(res,runningsum);
          if(runningsum<0)runningsum=0;
        //   res=max(res,runningsum);
        }
        return res;
    }
};
