class Solution {
public:
    int thirdMax(vector<int>& nums) {
        std::set<int> myset(nums.begin(),nums.end());
        //a set resorts itself// std::sort(myset.begin(),myset.end());
        std::set<int>::iterator itr;
        std::set<int>::reverse_iterator r_itr;
        // for(itr=myset.begin();itr!=myset.end();itr++){
        //     cout<<*itr<<endl;
        // }
        if(myset.size()<3){
            // cout<<"inhere"<<endl;
            r_itr=myset.rbegin();
            return *r_itr;
        }
        else{
            itr=myset.begin();
            std::advance(itr, myset.size()-3);
            return *itr;
        }
        return 0;
    }
};