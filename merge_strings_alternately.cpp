class Solution
{
	public:
		string mergeAlternately(string word1, string word2)
		{
			string output ="";
     		int i=0;
			for(; i< word1.length() && i<word2.length(); i++)
			{
				output+= word1[i];
				output+= word2[i];
			}
			
			if(i==word1.length())
			{
				for(int j=i; j< word2.length(); j++)
					output+=word2[j];
			}
			for(int j=i; j<word1.length(); j++)
				output+=word1[j];

 		    return output;
			
		}
};
