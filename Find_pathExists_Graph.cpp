class Solution {
public:
bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {

	if(source == destination)
		return true;

	unordered_map<int, unordered_set<int>> adjlist;
	for(int i=0; i< edges.size(); i++)
	{
		adjlist[edges[i][0]].insert(edges[i][1]);
		adjlist[edges[i][1]].insert(edges[i][0]);
	}

	unordered_set<int> visited;
	queue<int> vertices;
	vertices.push(source);
	while(!vertices.empty())
	{
		int v = vertices.front();
		for(auto adjv: adjlist[v])
		{
			if(adjv == destination)
				return true;
			if(visited.find(adjv)==visited.end())
				vertices.push(adjv);
		}
		visited.insert(v);
		vertices.pop();
	}
	return false;
}
