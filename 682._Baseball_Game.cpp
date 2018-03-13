class Solution {
public:
    struct stack{
        int a[1000];
        int top;
    }s;
    
    void init(){
        s.top=-1;
    }
    
    void push(int val){
        s.top++;
        s.a[s.top]=val;
    }
    
    void pop(){
        s.top--;
    }
    
    int peek_D(){
        return 2*s.a[s.top];
    }
    
    int peek_plus(){
        return s.a[s.top]+s.a[s.top-1];
    }
    
    int sum(){
        int total=0;
        for(int i=0;i<=s.top;i++){
            //cout<<"Value::"<<s.a[i]<<endl;
            total+=s.a[i];
        }
        return total;
    }
    
//     void Display(){
//         for(int i=0;i<=s.top;i++){
//             cout<<"element "<<i<<s.a[s.top];;
//         }
//     }
    
    int calPoints(vector<string>& ops) {
        init();
        for(int i=0;i<ops.size();i++){
            if(ops[i]=="C"){
                pop();
            }
            else if(ops[i]=="D"){
                push(peek_D());
            }
            else if(ops[i]=="+"){
                push(peek_plus());
            }
            else{
                stringstream ss;
                ss<<ops[i];
                int val;
                ss>>val;
                push(val);
            }
        }
        return sum();
    }
};