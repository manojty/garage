#pragma once
struct treeNode
{
	int info;
	treeNode* left;
	treeNode* right;
	treeNode(int info) { left = nullptr; right = nullptr; this->info = info; }
};

void addTreeNode(treeNode** ppRoot, int &info);
void buildBSTTree(treeNode** ppRoot, vector<int> nodes);
void inorder(treeNode* root, vector<int> &nodes);
void preorder(treeNode* root, vector<int> &nodes);
void postorder(treeNode* root, vector<int> &nodes);
void printTraversal(vector<int> &inorderNodes, vector<int> &prerderNodes, vector<int> &postorderNodes);
extern vector<int> inputBSTNodes;
