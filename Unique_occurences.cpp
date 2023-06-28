class Solution{

unordered_map<int, int> ump;
unordered_set<int> s;
public:

	bool uniqueOccurrences(vector<int>& arr)
	{
		for(auto val:arr)
 	{
			ump[val]++;
		}
		for(auto occ: ump)
		{
			if(s.find(occ.second) != s.end())
				return false;
			s.insert(occ.second);
		}
		return true;
	}
};
