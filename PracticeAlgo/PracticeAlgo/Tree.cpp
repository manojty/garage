#include "stdafx.h"
#include "Tree.h"

vector<int> inputBSTNodes = { 500,300,200,100,50,150,250,400,800,600,900,550,700 };

void buildBSTTree(treeNode** ppRoot, vector<int> nodes)
{
	if (nodes.empty()) { return; }

	int i = 0;
	while (i<nodes.size())
	{
		addTreeNode(ppRoot, nodes.at(i++));
	}
}

void addTreeNode(treeNode** ppRoot, int &info)
{
	if (*ppRoot == nullptr) { *ppRoot = new treeNode(info); return; }

	if ((*ppRoot)->info < info)
		addTreeNode(&(*ppRoot)->right, info);
	else
		addTreeNode(&(*ppRoot)->left, info);

}

void inorder(treeNode* root, vector<int> &nodes)
{
	if (root == nullptr) { return; }
	inorder(root->left, nodes);
	nodes.emplace_back(root->info);
	inorder(root->right, nodes);
}

void preorder(treeNode* root, vector<int> &nodes)
{
	if (root == nullptr) { return; }
	nodes.emplace_back(root->info);
	preorder(root->left, nodes);
	preorder(root->right, nodes);
}

void postorder(treeNode* root, vector<int> &nodes)
{
	if (root == nullptr) { return; }
	postorder(root->left, nodes);
	postorder(root->right, nodes);	
	nodes.emplace_back(root->info);

}

void printTraversal(vector<int> &inorderNodes, vector<int> &prerderNodes, vector<int> &postorderNodes)
{

	cout << "\n\r" << "=========== InOrder ================" << "\n\r";
	int i = 0;
	while (i < inorderNodes.size())
	{
		cout << inorderNodes.at(i++) << ", ";
	}
	
	cout << "\n\r" << "=========== PreOrder ================" << "\n\r";
	i = 0;
	while (i < prerderNodes.size())
	{
		cout << prerderNodes.at(i++) << ", ";
	}

	cout << "\n\r" << "=========== PostOrder ================" << "\n\r";
	i = 0;
	while (i < postorderNodes.size())
	{
		cout << postorderNodes.at(i++) << ", ";
	}


}