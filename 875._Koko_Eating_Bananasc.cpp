


class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int H) {

  if(piles.empty()) return 0;

  long long curtime,mid,n = piles.size(),start = 1,end = INT_MAX;
  if(n > H) return 0;

  while(start < end){
    mid = start + (end - start)/2;
    curtime = 0;
    // cout<<"start::"<<start<<" end::"<<end<<endl;
    for(auto i:piles) curtime += (i-1)/mid + 1;
    if(curtime <= H) end = mid; else start = mid + 1;
  }
  return start;

        
    }
};