class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int, int> counts; 
        int n = nums.size();
        for (int i = 0; i < n; i++){
            counts[nums[i]]++;
            if (counts[nums[i]] > n / 2)
                return nums[i];
        }
    }
    
};