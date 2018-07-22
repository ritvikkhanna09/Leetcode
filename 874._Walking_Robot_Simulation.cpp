class Solution {
public:
    int robotSim(vector<int>& c, vector<vector<int>>& obstacles) {
        set<pair<int ,int>> A;
        for (auto& it : obstacles) {
            A.insert({it[0], it[1]});
        }
        int x=0,y=0;
        int dir=0;//0-N,1-W,2-S,3-E.
        int dist=0;
        for(int i=0;i<c.size();i++){
            if(c[i]==-1)
                dir=(dir+3)%4;
            else if(c[i]==-2)
                dir=(dir+1)%4;
            else{
                for(int k=0;k<c[i];++k){
                    int temp_x=x;
                    int temp_y=y;
                    if(dir==0)
                        temp_y=y+1;
                    else if(dir==1)
                        temp_x=x-1;
                    else if(dir==2)
                        temp_y=y-1;
                    else if(dir==3)
                        temp_x=x+1;
                    if (A.count({temp_x, temp_y})) break;
                    x=temp_x;
                    y=temp_y;
                }
            }
            // cout<<x<<" "<<y<<endl;
            dist=max(dist,(x*x)+(y*y));
        }
        return dist;
    }
};