class Solution {


public:
    bool backspaceCompare(string s1, string s2)
{
	string s3 = s1, s4=s2;
	int i=0, j=0;
	for(int k = 0; k< s1.length(); k++)
	{
		if(s1[k] !='#')
		{
			s3[i] = s1[k];
			i++;
		}
		else
		{
			i--;
			if(i<0)
				i=0;
		}
	}
	s3=s3.substr(0,i);
	
	for(int k = 0; k< s2.length(); k++)
	{
		if(s2[k] !='#')
		{
			s4[j] = s2[k];
			j++;
		}
		else
		{
			j--;
			if(j<0)
				j=0;
		}
	}
	s4 = s4.substr(0,j);
	if(s3 == s4)
		return true;
	return false;
}

};
