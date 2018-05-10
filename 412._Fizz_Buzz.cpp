class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> result;
        for(int i=1;i<n+1;i++){
            if (i%15==0)
                result.push_back("FizzBuzz");
            else if(i%5==0)
                result.push_back("Buzz");
            else if(i%3==0)
                result.push_back("Fizz");
            else
                result.push_back(std::to_string(i));
        }
        return result;
    }
};