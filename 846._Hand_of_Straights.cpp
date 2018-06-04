class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int W) {
        if (hand.size()%W) return false;
        map<int,int> cnt;
        for(auto& i:hand)
            cnt[i]++;
        while(!cnt.empty()){
            int x=cnt.begin()->first;
            for(int i=0;i<W;++i){
                if(!cnt.count(x+i)) return false;
                if(--cnt[x+i]==0) cnt.erase(x+i);
            }
        }
        return true;
    }
};
