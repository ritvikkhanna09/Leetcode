class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>> result;
        result.push_back(vector<int>{1});
        if(rowIndex==0)
            return result[0];
        result.push_back(vector<int>{1,1});
        if(rowIndex==1)
            return result[1];
        for(int i=2;i<=rowIndex;i++){
            vector<int> temp;
            temp.push_back(1);
            // cout<<result[i-1].size()<<endl;
            for(int j=0;j<result[i-1].size()-1;j++){
                temp.push_back(result[i-1][j]+result[i-1][j+1]);
            }
            temp.push_back(1);
            result.push_back(temp);
        }
        return result[rowIndex];
    }
};
