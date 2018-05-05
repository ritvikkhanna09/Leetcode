vector<int> plusOne(vector<int>& digits) {
    int n = digits.size();
    if( n==1 ){
        
        if( digits[0]==9){
            digits.push_back(0);
            digits[0]=1;
        }
        
        else
            digits[0]=digits[0]+1;       
    }
   
    else {
        while(digits[n-1]==9 && n>=1){
            digits[n-1]=0;
            n--;
        }
        if(n==0){
            digits.insert(digits.begin(),1);
        }
        else
            digits[n-1]=digits[n-1]+1;
        
    }
       
   return digits;    
    
}
