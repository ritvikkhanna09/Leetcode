class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double max_val=INT_MIN;
        double sum=0;
        for(int i=0;i<nums.size();i++){
            if(i<k) sum+=nums[i];
            else{
                max_val=max(max_val,sum);
                sum+=nums[i]-nums[i-k];
            }
        }
        max_val=max(max_val,sum);
            return max_val/k;
    }
};