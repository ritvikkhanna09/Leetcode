class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        
        vector<int> V;
        
        for(const auto&str:timePoints){
            
            int first = toMin(str).first;
            int second = toMin(str).second;
            int res = first*60 + second;
            
            V.push_back(res);
            V.push_back(res+24*60);
        }
        
        std::sort(V.begin(),V.end());
        int res = INT_MAX;
        
        for(int i=0;i<V.size()-1;i++){
            res = min(res,V[i+1]-V[i]);
        }
        
        return res;
    }
    
    pair<int,int> toMin(const string&time){
        
        int index = time.find(":");
        
        return pair<int,int>({stoi(time.substr(0,index)),stoi(time.substr(index+1))});
    }
};