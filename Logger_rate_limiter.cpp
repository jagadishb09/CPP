class Logger
{
    public:
	unordered_map<string, int> strsts;
	Logger()
	{}
	
    bool shouldPrintMessage(int timestamp, string message)
    {
	if(strsts.find(message) != strsts.end())
	{
		if(timestamp >= (strsts[message]+10))
		{
			strsts[message] =timestamp;
			return true;
		}
		return false;
	}
	strsts[message] = timestamp;
	return true;    
    }	
};
