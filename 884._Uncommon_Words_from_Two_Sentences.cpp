class Solution {
public:
    vector<string> uncommonFromSentences(string A, string B) {
        map<string,int> hash;
        vector<string> result;
        istringstream ss(A);
        do{
            string temp;
            ss>>temp;
            hash[temp]++;
        }while(ss);
        istringstream ssb(B);
        do{
            string temp;
            ssb>>temp;
            hash[temp]++;
        }while(ssb);
        for(map<string,int>::iterator itr=hash.begin();itr!=hash.end();itr++){
            if(itr->second==1)
                result.push_back(itr->first);
        }
        return result;
    }
};