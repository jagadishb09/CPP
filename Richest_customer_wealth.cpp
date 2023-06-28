class Solution {
public:
int maximumWealth(vector<vector<int>>& accounts)
{
	int maxw = 0;
	for(auto v : accounts)
	{
	int sum=0;
	for(auto w: v)
	{
		sum+=w;
	}
		if(sum>maxw)
			maxw=sum;
    }
return maxw;
}
};
