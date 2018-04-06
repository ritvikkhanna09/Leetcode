class Solution {
public:
    int arrayNesting(vector<int>& nums) {
        int max_s=0;
        for(int i=0;i<nums.size();i++){
            int count=0;
            int j=i;
            while(nums[j]>=0){
                int x=nums[j];
                nums[j]=-1;
                j=x;
                count++;
            }
            //cout<<"End of While Loop"<<endl;
            if(max_s<count)
                max_s=count;
        }
        return max_s;
    }    
};