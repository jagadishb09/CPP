class Solution {
public:
bool isValid(string s)
{
	if(s.length()==0)
		return true;
	
	stack<char> chars;
	chars.push(s[0]);
	int flag=0;
	for(int i=1; i < s.length(); i++)
	{
		flag=0;
		if(!chars.empty())
		{
		if(chars.top() == '(' && s[i] == ')')
		{
			chars.pop();
			flag=1;
		}
		else if (chars.top() == '{' && s[i] == '}')
		{
			chars.pop();
			flag=1;
		}
		else if (chars.top() == '[' && s[i] ==']')
		{
			chars.pop();
			flag=1;
		}
		}
		if(!flag)
		{
			chars.push(s[i]);
			//flag=0;
		}
	}
	if(chars.empty())
		return true;
	return false;
}

};
