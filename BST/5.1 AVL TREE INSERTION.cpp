#include<iostream>
using namespace std;
class node
{
	public:
		node *left,*right;
		int key;
		node()
		{
			left=NULL;
			right=NULL;
		}
		node *insert(node *root,int key);
		int maxdepth(node *depthroot);	
		node *leftrotate(node *root);
		node *rightrotate(node *root);
		void *preorder(node *root);
};
void *node::preorder(node *root)
{
	if(root!=NULL)
	{
		cout<<root->key<<" ";
		preorder(root->left);
		preorder(root->right);
	}
}
node* node::leftrotate(node *y)
{
	node *x=y->right;
	node *t2=x->left;
	
	x->left=y;
	y->right=t2;
	return x;
	
}
node *node::rightrotate(node *y)
{
	node *x=y->left;
	node *t2=x->right;
	
	x->right=y;
	y->left=t2;
	return x;
	
}
int node::maxdepth(node *depthroot)
{
	if(depthroot==NULL)
	{
		return 0;
	}
	int ldepth=maxdepth(depthroot->left);
	int rdepth=maxdepth(depthroot->right);
	if(ldepth>rdepth)
	{
		return ldepth+1;
	}	
	else return rdepth+1;
}
node* node::insert(node *root,int key)
{
	if(root==NULL)
	{
		node *temp=new node;
		temp->key=key;
		temp->left=NULL;
		temp->right=NULL;
		return temp;
	}
	if(root->key>key)
	{
		root->left=insert(root->left,key);
	}
	else
	{
		root->right=insert(root->right,key);
	}
	int balance=maxdepth(root->left)-maxdepth(root->right);
	
	if(balance > 1&& (root->left->key)>key)
	{
		return rightrotate(root);
	} 
	if(balance > 1&&(root->left->key)<key)
	{
		root->left=leftrotate(root->left);
		return rightrotate(root);
	}
	if(balance < -1 && (root->right->key)>key)
	{
		root->right=rightrotate(root->right);
		return leftrotate(root);	
	}
	if(balance < -1 && (root->right->key)<key)
	{
		return leftrotate(root);
	}
	return root;
}
int main()
{
	node n;
	node *root=NULL;
	root = n.insert(root, 17);
	root = n.insert(root, 11);
	root = n.insert(root, 7);
	root = n.insert(root, 53);
	root = n.insert(root, 4);	
	root = n.insert(root, 13);
	root = n.insert(root, 12);
	root = n.insert(root, 8);
	root = n.insert(root, 60);
	root = n.insert(root, 19);
	root = n.insert(root, 16);
	root = n.insert(root, 20);
	n.preorder(root);
	return 0;
}








//#include<iostream>
//using namespace std;
//class node
//{
//	public:
//		int key;
//		node *left,*right;
//		node()
//		{
//			left=NULL;
//			right=NULL;
//		}
//		node *insert(node *root,int key);
//		int maxdepth(node *depthroot);
//		node *rightrotate(node *root);
//		node *leftrotate(node *root);
//		void preorder(node *root);
//};
//void node::preorder(node *root)
//{
//	if(root!=NULL)
//	{
//		cout<<root->key<<" ";
//		preorder(root->left);
//		preorder(root->right);
//	}
//}
//node* node::leftrotate(node *x)
//{
//	node *y = x->right;
//	node *T2 = y->left;
//
//	// Perform rotation
//	y->left = x;
//	x->right = T2;
//	
//	return y;
//}
//node *node::rightrotate(node *y)
//{
//	node *x = y->left;
//	node *T2 = x->right;
//
//	// Perform rotation
//	x->right = y;
//	y->left = T2;
//	return x;
//}
//int node::maxdepth(node *depthroot)
//{
//	if(depthroot==NULL)
//	{
//		return 0;
//	}
//	int ldepth=maxdepth(depthroot->left);
//	int rdepth=maxdepth(depthroot->right);
//	if(ldepth>rdepth)
//		return ldepth+1;
//	return rdepth+1;
//}
//node* node::insert(node *root,int key)
//{
//	if(root==NULL)
//	{
//		node *temp=new node;
//		temp->key=key;
//		return temp;
//	}
//	if(root->key>key)
//	{
//		root->left=insert(root->left,key);
//	}
//	else
//	{
//		root->right=insert(root->right,key);
//	}
//	int balance=maxdepth(root->left)-maxdepth(root->right);
//	if(balance>1 && (root->left->key)>key)
//	{
//		return rightrotate(root);
//	}
//	if(balance>1 && (root->left->key<key))
//	{
//		root->left=leftrotate(root->left);
//		return rightrotate(root);
//	}
//	if(balance<-1 && (root->right->key)>key)
//	{
//		root->right=rightrotate(root->right);
//		return leftrotate(root);
//	}
//	if(balance <-1 && (root->right->key)<key)
//	{
//		return leftrotate(root);
//	}
//	return root;
//}
//int main()
//{
//	node n;
//	node *root=NULL;
//	root = n.insert(root, 14);
////	cout<<root->key;
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
//	n.preorder(root);
//	return 0;
//}
//










//// C++ program to insert a node in AVL tree
//#include<bits/stdc++.h>
//using namespace std;
//
//// An AVL tree node
//class Node
//{
//	public:
//	int key,height;
//	Node *left,*right;
//	Node()
//	{
//		left=NULL;
//		right=NULL;
//	}
//	Node* insert(Node* node, int key);
//};
//
//int maxdepth(Node *root)
//{
//	if(root==NULL)
//		return 0;
//	
//	int ldepth=maxdepth(root->left);
//	int rdepth=maxdepth(root->right);
//	if(ldepth>rdepth)
//		return ldepth+1;
//	return rdepth+1;
//}
//
//
//int max(int a, int b)
//{
//	if(a>b)
//		return a;
//	return b;
//}
//
//
//int height(Node *N)
//{
//	if (N == NULL)
//		return 0;
//	else
//	{
////		cout<<N->height<<" ";
//		return N->height;	
//	}
//	
//}
//
//
//Node *rightRotate(Node *y)
//{
//	Node *x = y->left;
//	Node *T2 = x->right;
//
//	// Perform rotation
//	x->right = y;
//	y->left = T2;
//
//	// Update heights
////	y->height = max(height(y->left),
////					height(y->right)) + 1;
////	x->height = max(height(x->left),
////					height(x->right)) + 1;
//
//	// Return new root
//	return x;
//}
//
//Node *leftRotate(Node *x)
//{
//	Node *y = x->right;
//	Node *T2 = y->left;
//
//	// Perform rotation
//	y->left = x;
//	x->right = T2;

//	// Update heights
//	x->height = max(height(x->left),
//					height(x->right)) + 1;
//	y->height = max(height(y->left),
//					height(y->right)) + 1;
//
//	// Return new root
//	return y;
//}
//
//// Get Balance factor of node N
//int getBalance(Node *N)
//{
//	if (N == NULL)
//		return 0;
//	return height(N->left) - height(N->right);
//}
//
//
//void inorder(Node *root)
//{
//	if(root != NULL)
//	{
//		inorder(root->left);
//		cout << root->key << " ";
//		inorder(root->right);
//	}
//}
//
//void preorder(Node *root)
//{
//	if(root != NULL)
//	{
//		cout << root->key << " ";
//		preorder(root->left);
//		preorder(root->right);
//	}
//}
//
//
//
//Node* Node::insert(Node* node, int key)
//{
//	if (node == NULL)
//	{
//		Node* node = new Node();
//		node->key = key;
//		node->height = 1;
//		return node;
//	}
//
//	if (key < node->key)
//		node->left = insert(node->left, key);
//	else if (key > node->key)
//		node->right = insert(node->right, key);
//	
//	cout<<endl<<endl;
//	cout<<"------------key "<<key<<"-----------\n";
//	
//	int balance= maxdepth(node->left)-maxdepth(node->right);
//	cout<<"node->key = "<<node->key<<endl;
//	cout<<"Balance  = "<<balance<<endl;
//	
//	if (balance > 1 && key < node->left->key)
//	{
//		cout<<"Key "<<key<<endl;
//		cout<<"node->left->key"<<node->left->key<<endl;
//		cout<<"Right rotate 1st if"<<endl;
//		return rightRotate(node);	
//	}
//		
//	// Right Right Case
//	if (balance < -1 && key > node->right->key)
//	{
//		cout<<"Left rotate 2nd if"<<endl;
//		return leftRotate(node);	
//	}
//	
//	// Left Right Case
//	if (balance > 1 && key > node->left->key)
//	{
//		cout<<"right rotate 3rd if"<<endl;
//		node->left = leftRotate(node->left);
//		return rightRotate(node);
//	}
//
//	// Right Left Case
//	if (balance < -1 && key < node->right->key)
//	{
//		cout<<"Left rotate 4th if"<<endl;
//		node->right = rightRotate(node->right);
//		return leftRotate(node);
//	}
//	/* return the (unchanged) node pointer */
//	return node;
//}
//
//
//int main()
//{
//	Node n;
//	Node *root = NULL;
//	root = n.insert(root, 14);	
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
//	preorder(root);
//	return 0;
//}


//	root = n.insert(root, 21);
//	root = n.insert(root, 26);
//	root = n.insert(root, 30);
//	root = n.insert(root, 9);
//	root = n.insert(root, 4);
//	root = n.insert(root, 14);	
//	root = n.insert(root, 28);
//	root = n.insert(root, 18);
//	root = n.insert(root, 15);
//	root = n.insert(root, 10);
//	root = n.insert(root, 2);
//	root = n.insert(root, 3);
//	root = n.insert(root, 7);
//	cout << "PRE ORDER IS \n";
//	inorder(root);





















































//
//// C++ program to insert a node in AVL tree
//#include<bits/stdc++.h>
//using namespace std;
//
//// An AVL tree node
//class Node
//{
//	public:
//	int key,height;
//	Node *left,*right;
//	Node()
//	{
//		left=NULL;
//		right=NULL;
//	}
//	Node* insert(Node* node, int key);
//};
//
//int maxdepth(Node *root)
//{
//	if(root==NULL)
//		return 0;
//	
//	int ldepth=maxdepth(root->left);
//	int rdepth=maxdepth(root->right);
//	if(ldepth>rdepth)
//		return ldepth+1;
//	return rdepth+1;
//}
//
//
//int max(int a, int b)
//{
//	if(a>b)
//		return a;
//	return b;
//}
//
//
//int height(Node *N)
//{
//	if (N == NULL)
//		return 0;
//	else
//	{
////		cout<<N->height<<" ";
//		return N->height;	
//	}
//	
//}
//
//
//Node *rightRotate(Node *y)
//{
//	Node *x = y->left;
//	Node *T2 = x->right;
//
//	// Perform rotation
//	x->right = y;
//	y->left = T2;
//
//	// Update heights
//	y->height = max(height(y->left),
//					height(y->right)) + 1;
//	x->height = max(height(x->left),
//					height(x->right)) + 1;
//
//	// Return new root
//	return x;
//}
//
//Node *leftRotate(Node *x)
//{
//	Node *y = x->right;
//	Node *T2 = y->left;
//
//	// Perform rotation
//	y->left = x;
//	x->right = T2;
//
//	// Update heights
//	x->height = max(height(x->left),
//					height(x->right)) + 1;
//	y->height = max(height(y->left),
//					height(y->right)) + 1;
//
//	// Return new root
//	return y;
//}
//
//// Get Balance factor of node N
//int getBalance(Node *N)
//{
//	if (N == NULL)
//		return 0;
//	return height(N->left) - height(N->right);
//}
//
//Node* Node::insert(Node* node, int key)
//{
//	if (node == NULL)
//	{
//		Node* node = new Node();
//		node->key = key;
//		node->height = 1;
//		return node;
//	}
//
//	if (key < node->key)
//		node->left = insert(node->left, key);
//	else if (key > node->key)
//		node->right = insert(node->right, key);
//	
//	cout<<endl<<endl;
//	cout<<"------------key "<<key<<"-----------\n";
//	
//
//	int balance= maxdepth(node->left)-maxdepth(node->right);
//	
//	if (balance > 1 && key < node->left->key)
//		return rightRotate(node);
//
//	// Right Right Case
//	if (balance < -1 && key > node->right->key)
//		return leftRotate(node);
//
//	// Left Right Case
//	if (balance > 1 && key > node->left->key)
//	{
//		node->left = leftRotate(node->left);
//		return rightRotate(node);
//	}
//
//	// Right Left Case
//	if (balance < -1 && key < node->right->key)
//	{
//		node->right = rightRotate(node->right);
//		return leftRotate(node);
//	}
//
//	/* return the (unchanged) node pointer */
//	return node;
//}
//
//void inorder(Node *root)
//{
//	if(root != NULL)
//	{
//		inorder(root->left);
//		cout << root->key << " ";
//		inorder(root->right);
//	}
//}
//void preorder(Node *root)
//{
//	if(root != NULL)
//	{
//		cout << root->key << " ";
//		preorder(root->left);
//		preorder(root->right);
//	}
//}
//int main()
//{
//	Node n;
//	Node *root = NULL;
////	root = n.insert(root, 14);
////	root = n.insert(root, 17);
////	root = n.insert(root, 11);
////	root = n.insert(root, 7);
////	root = n.insert(root, 53);
////	root = n.insert(root, 4);	
////	root = n.insert(root, 13);
////	root = n.insert(root, 12);
////	root = n.insert(root, 8);
////	root = n.insert(root, 60);
////	root = n.insert(root, 19);
////	root = n.insert(root, 16);
////	root = n.insert(root, 20);
////	
//	
//	root = n.insert(root, 21);
//	root = n.insert(root, 26);
//	root = n.insert(root, 30);
//	root = n.insert(root, 9);
//	root = n.insert(root, 4);
//	root = n.insert(root, 14);	
//	root = n.insert(root, 28);
//	root = n.insert(root, 18);
//	root = n.insert(root, 15);
//	root = n.insert(root, 10);
//	root = n.insert(root, 2);
//	root = n.insert(root, 3);
//	root = n.insert(root, 7);
//	cout << "PRE ORDER IS \n";
////	inorder(root);
//	preorder(root);
//	return 0;
//}
//

