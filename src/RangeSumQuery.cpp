class NumArray {
public:
	NumArray(vector<int> &nums) {
		if (!nums.empty())
		{
			m_nums.push_back(nums[0]);
			for(vector<int>::size_type i = 1; i != nums.size(); i++)
			{
				m_nums.push_back(m_nums[i-1] + nums[i]);
			}
		}
	}

	int sumRange(int i, int j) {
		int sum = 0;
		if( m_nums.size() < j) return sum;
		if(i != 0)
			sum = m_nums[j] - m_nums[i-1];
		else sum = m_nums[j];
		return sum;
	}

	vector<int> m_nums;
};


// Your NumArray object will be instantiated and called as such:
// NumArray numArray(nums);
// numArray.sumRange(0, 1);
// numArray.sumRange(1, 2);