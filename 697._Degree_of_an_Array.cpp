class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        map<int,vector<int>> mmap; //key = int , value = indexes
        if(nums.size()==0)
            return 0;
        if(nums.size()==1)
            return 1;      
        int max_degree= 0;
        int min_subarl=0;
        int min_subarr=0;
        for(int i=0; i<nums.size();i++){
            int item= nums[i];
            map<int,vector<int>>::iterator it= mmap.find(item);
            if(it==mmap.end()){
                vector<int> arr;
                arr.push_back(i);
                mmap.insert(pair<int,vector<int>>(item,arr));
            }
            else{
                vector<int> *v= &it->second;
                v->push_back(i);
                int degree = v->size();
                if(degree>max_degree){
                    max_degree= degree;
                    min_subarl = v->at(0);
                    min_subarr = i;
                }
                else if( degree == max_degree)
                {
                    if((i-v->at(0))<(min_subarr-min_subarl)){
                        min_subarl= v->at(0);
                        min_subarr = i;
                    }
                }
                
            }
        }
        return (min_subarr - min_subarl+1);
        
        
        
    }
};