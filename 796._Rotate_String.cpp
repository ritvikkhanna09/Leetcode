class Solution {
public:
    bool rotateString(string A, string B) {
        int n=A.size();
        int i=0;
        while(i<n+1){
            string temp;
            temp.append(A.begin()+i,A.end());
            temp.append(A,0,i);
            // cout<<temp<<endl;
            i++;
            if(temp==B)
                return true;
        }
        return false;
    }
};