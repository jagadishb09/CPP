class Solution {
public:
void recurse(TreeNode*& root, unordered_set<int>& to_delete, vector<TreeNode*>& nodes)
{
	//root=nullptr;
	if(root == nullptr)
		return;
	recurse(root->left, to_delete, nodes);
	recurse(root->right, to_delete, nodes);
	if(to_delete.find(root->val)!=to_delete.end())
	{
		if(root->left!=nullptr)
			nodes.push_back(root->left);
		if(root->right!=nullptr)
			nodes.push_back(root->right);
		root=nullptr;
	}

}

vector<TreeNode*> delNodes(TreeNode* root, vector<int>& to_delete) {


unordered_set<int> del;
for(auto d : to_delete)
	del.insert(d);


vector<TreeNode*> nodes;
recurse(root, del, nodes);
if(root!=nullptr && del.find(root->val)==del.end())
    nodes.push_back(root);
return nodes;	
}

};
