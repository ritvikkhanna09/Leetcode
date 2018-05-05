class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& matrix){
        vector<int> result;
	int r = matrix.size();
	int c = matrix[0].size();
	int i= 0;
	int j=-1;
	
	int elem = 0;
	while(elem < r*c)
    	{
    	    //for printing upward direction
    	    if(i == r)
    	    {
    		j= j+2;
    		i--;
    	    }
    	    else if(j==-1)
    		j =0;	
    	    for(; i>=0 && j<c; i--, j++)
    	    {
    		result.push_back(matrix[i][j]);
    		elem++;
    	    }
    
    	    //for printing downward direction
    	    if(j == c)
    	    {
    		i= i+2;
    		j--;
    	    }
    	    else if(i ==-1)
    	    {
    		i =0;
    	    }
    	    for(; i<r && j>=0; i++, j--)
    	    {
    		result.push_back(matrix[i][j]);
    		elem++;
    	    }	    
    	    
    	}    
        return result;
    }
    
};