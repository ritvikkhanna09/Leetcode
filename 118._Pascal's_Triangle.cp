class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> result;
        if(numRows==0)
            return result;
        result.push_back(vector<int>{1});
        if(numRows==1)
            return result;
        result.push_back(vector<int>{1,1});
        if(numRows==2)
            return result;
        for(int i=2;i<numRows;i++){
            vector<int> temp;
            temp.push_back(1);
            // cout<<result[i-1].size()<<endl;
            for(int j=0;j<result[i-1].size()-1;j++){
                temp.push_back(result[i-1][j]+result[i-1][j+1]);
            }
            temp.push_back(1);
            result.push_back(temp);
        }
        return result;
    }
};