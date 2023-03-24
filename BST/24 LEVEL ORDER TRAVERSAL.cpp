//// Recursive CPP program for level
//// order traversal of Binary Tree
//#include <bits/stdc++.h>
//using namespace std;
//
///* A binary tree node has data,
//pointer to left child
//and a pointer to right child */
//class node {
//public:
//	int data;
//	node *left, *right;
//};
//
///* Function prototypes */
//void printCurrentLevel(node* root, int level);
//int height(node* node);
//void printLevelOrder(node* root)
//{
//	
//}
//
//int height(node* node)
//{
//	if (node == NULL)
//		return 0;
//	else
//	{
//		int lheight = height(node->left);
//		int rheight = height(node->right);
//		if (lheight > rheight) {
//			return (lheight + 1);
//		}
//		else {
//			return (rheight + 1);
//		}
//	}
//}
//
///* Helper function that allocat
///* Driver code*/
//int main()
//{
//	node* root = newNode(1);
//	root->left = newNode(2);
//	root->right = newNode(3);
//	root->left->left = newNode(4);
//	root->left->right = newNode(5);
//
//	cout << "Level Order traversal of binary tree is \n";
//	printLevelOrder(root);
//
//	return 0;
//}
//












#include<iostream>
using namespace std;
class node
{
	public:
		node *left;
		node *right;
		int key;	
		node *insert(node *head, int key);	
		void preorder(node *head);
		void printlevelorder(node *head);
		void printCurrentLevel(node* root, int level);
		int height(node *node);
};


int node::height(node* node)
{
	if (node == NULL)
		return 0;
	else
	{
		int lheight = height(node->left);
		int rheight = height(node->right);
		if (lheight > rheight) {
			return (lheight + 1);
		}
		else {
			return (rheight + 1);
		}
	}
}


void node::printCurrentLevel(node* root, int level)
{
	if (root == NULL)
		return;
	if (level == 1)
		cout << root->key << " ";
	else if (level > 1) {
		printCurrentLevel(root->left, level - 1);
		printCurrentLevel(root->right, level - 1);
	}
}


void node::printlevelorder(node *root)
{
	int h = height(root);
	cout<<"Height : "<<h<<endl;
	int i;
	for (i = 1; i <= h; i++)
		printCurrentLevel(root, i);
}


int main()
{
	node n;
	node *root=NULL;
	root = n.insert(root, 14);
	root = n.insert(root, 11);
	root = n.insert(root, 19);
	root = n.insert(root, 7);
	root = n.insert(root, 4);	
	root = n.insert(root, 8);
	root = n.insert(root, 12);
	root = n.insert(root, 13);
	root = n.insert(root, 17);
	root = n.insert(root, 53);
	root = n.insert(root, 16);
	root = n.insert(root, 20);
	root = n.insert(root, 60);
//	n.preorder(root);
	n.printlevelorder(root);
}


void node::preorder(node *head)
{
	if(head!=NULL)
	{
		cout<<head->key<<" ";
		preorder(head->left);
		preorder(head->right);	
	}
	
}


node* node::insert(node *head, int key)
{
	node *temp=new node;
	temp->key=key;
	temp->left=NULL;
	temp->right=NULL;
	if(head==NULL)
	{
		return temp;
	}
	else
	{
		if(head->key>key)
		{
			head->left=insert(head->left,key);
		}
		else
		{
			head->right=insert(head->right,key);
		}
	}
	return head;
}

















//	root = n.insert(root, 17);
//	root = n.insert(root, 11);
//	root = n.insert(root, 7);
//	root = n.insert(root, 53);
//	root = n.insert(root, 4);	
//	root = n.insert(root, 13);
//	root = n.insert(root, 12);
//	root = n.insert(root, 8);
//	root = n.insert(root, 60);
//	root = n.insert(root, 19);
//	root = n.insert(root, 16);
//	root = n.insert(root, 20);



