class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> result;
        vector<int> a(nums.size(),0);
        // int a[nums.size()]={0};
        for(int i=0;i<nums.size();i++){
           a[nums[i]-1]++; 
        }
        for(int i=0;i<a.size();i++){
            if (a[i]==0)
                result.push_back(i+1);
        }
        return result;
    }
};