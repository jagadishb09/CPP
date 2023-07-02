class Solution {
public:

//void subset (vector<int> set, vector<vector<int>>& subsets, vector<int>& nums, int i)
//{
  //set.push_back(nums[i]);
	//subsets.push_back(set);
//}
vector<vector<int>> subsets(vector<int>& nums) {
  vector<vector<int>> subsets;
  vector<int> set;
  subsets.push_back(set);
for(int i=0; i< nums.size(); i++)
{
	long s = subsets.size();
  for(int j=0; j< s; j++)
  {
		vector<int> v = subsets[j];
		v.push_back(nums[i]);
		subsets.push_back(v);
  }
}
return subsets;
}

};
