class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int>::iterator i_O = nums.begin();
	    vector<int>::iterator i_NotO = nums.begin();
	    while(true)
    	{    
	    	while(i_O != nums.end())
	    	{
	    		if(*i_O!=0) i_O++;
	    		else break;
	    	}
	    	while(i_NotO != nums.end())
	    	{
		    	if(*i_NotO==0 || i_NotO < i_O) i_NotO++;
		    	else break;
		    }
	    	if(i_O != nums.end() && i_NotO != nums.end() && i_O < i_NotO)
	    	{
		    	*i_O = *i_NotO; *i_NotO = 0;
	    	}
		    if(i_NotO == nums.end() || i_O == nums.end()) break;
    	}
    }
};