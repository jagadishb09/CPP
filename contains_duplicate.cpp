class Solution{
	public:
		bool containsDuplicate(vector<int>& nums)
		{
			unordered_set<int> dups;
			for(auto val: nums)
			{
				if(dups.find(val)!=dups.end())
					return true;
				dups.insert(val);
			}
			return false;
		}
};
