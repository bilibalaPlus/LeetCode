class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> v_index;
        for(int i = 0; i < nums.size() - 1; i++)
		{
			for(int j = i + 1; j < nums.size(); j++)
			{
				if(nums[j] == target - nums[i])
				{
					v_index.push_back(i+1);
					v_index.push_back(j+1);
					return v_index;
				}
			}
		}
    }
};