class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
	unordered_map<int, int> ump;
	vector<int> indices;
	for(int i=0; i< nums.size(); i++)
	{
		if(ump.find(target-nums[i])!=ump.end())
		{
			indices.push_back(ump[target-nums[i]]);
			indices.push_back(i);
			return indices;
		}
		else{
			ump[nums[i]]=i;
		}
	}
	return indices;
    }

};
