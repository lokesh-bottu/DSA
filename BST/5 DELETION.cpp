#include<iostream>
using namespace std;
class node
{
	public:
		node *left,*right,*cur;
		int key;
	node()
	{
		left=NULL;
		right=NULL;
	}
	node *insert(node *root,int key);
	node *deletenode(node *root,int key);
	node* getsuc(node *root);
	void inorder(node *root);
};
void node::inorder(node *root)
{
	if(root!=NULL)
	{
		inorder(root->left);
		cout<<root->key<<" ";
		inorder(root->right);
	}
}
node* node::deletenode(node *root,int key)
{
	if(root==NULL)
	{
		return root;
	}
	else
	{
		if(root->key>key)
		{
			root->left=deletenode(root->left,key);
		}
		else if(root->key<key)
		{
			root->right=deletenode(root->right,key);
		}
		else
		{
			if(root->right==NULL)
			{
				node *temp=root->left;
				delete root;
				return temp;
			}
			else if(root->left==NULL)
			{
				node *temp=root->right;
				delete root;
				return temp;
			}
			else
			{
				node *loc;
				loc=getsuc(root);
				cout<<"Loc"<<loc->key<<endl;
				cout<<"root->right"<<root->right->key<<endl;
				root->key=loc->key;
				root->right=deletenode(root->right,loc->key);
			}
		}	
	}	
}
node* node::getsuc(node *root)
{
	cur=root->right;
	while(cur->left!=NULL)
	{
		cur=cur->left;
	}
	return cur;
}
node *node::insert(node *root,int key)
{
	if(root==NULL)
	{
		node *temp=new node;
		temp->key=key;
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
}
int main()
{
	node n;
	node *root=NULL;
	root=n.insert(root,19);
	root=n.insert(root,15);
	root=n.insert(root,22);
	root=n.insert(root,11);
	root=n.insert(root,17);
	root=n.insert(root,20);
	root=n.insert(root,25);
	root=n.insert(root,10);
	root=n.insert(root,12);
	root=n.insert(root,16);
	root=n.insert(root,18);
	n.inorder(root);
	cout<<endl;
	root=n.deletenode(root,15);
	n.inorder(root);
}















//#include<iostream>
//using namespace std;
//class node
//{
//	public:
//		node *left,*right,*parent,*cur;
//		int key;
//		node()
//		{
//			left=NULL;
//			right=NULL;
//		}
//		void *inorder(node *root);
//		node *getsuc(node *cur)
//		{
//			cur=cur->right;
//			while(cur!=NULL && cur->left!=NULL)
//			{
//				cur=cur->left;
//			}
//			return cur;
//		}
//		
//		node *insert(node *root,int key)
//		{
//			node *temp=new node;
//			temp->key=key;
//			temp->left=NULL;
//			temp->right=NULL;
//			if(root==NULL)
//			{
//				root=temp;
//				return temp;	
//			}
//			else
//			{
//				cout<<"---------while---------"<<endl;
//				cur=root;
//				while(cur!=NULL)
//				{
//					parent=cur;
//					if((cur->key)>key)
//					{
//						cout<<"Left"<<endl;
//						cur=cur->left;
//					}
//					else
//					{
//						cout<<"Right"<<endl;
//						cur=cur->right;
//					}
//				}
//			}
//			if((parent->key)>key)
//			{
//				parent->left=temp;
//			}
//			else
//			{
//				parent->right=temp;
//			}
//			cout<<key<<" Done"<<endl;
//			return root;
//		}
//		node *deletenode(node *root,int key)
//		{
//			if(root==NULL)
//			{
//				return root;
//			}
//			if((root->key)<key)
//			{
//				root->right=deletenode(root->right,key);
//			}
//			else if((root->key)>key)
//			{
//				root->left=deletenode(root->left,key);
//			}
//			else
//			{
//				if(root->left==NULL)
//				{
//					node *temp=root->right;
//					delete root;
//					return temp;
//				}
//				else if(root->right==NULL)
//				{
//					node *temp=root->left;
//					delete root;
//					return temp;
//				}
//				else
//				{
//					node *suc=getsuc(root);
//					root->key=suc->key;
//					root->right=deletenode(root->right,suc->key);
//				}
//			}
//		}
//};
//void *node::inorder(node *root)
//{
//	if(root!=NULL)
//	{
//		inorder(root->left);
//		cout<<root->key<<"  ";
//		inorder(root->right);
//	}
//}

//int main()
//{
//	node obj;
//	node *root=NULL;
//	root=obj.insert(root,40);
//	root=obj.insert(root,30);
//	root=obj.insert(root,50);
//	root=obj.insert(root,25);
//	root=obj.insert(root,35);
//	root=obj.insert(root,45);
//	root=obj.insert(root,60);
//	root=obj.insert(root,20);
//	root=obj.insert(root,26);
//	root=obj.insert(root,34);
//	root=obj.insert(root,36);
//	root=obj.insert(root,44);
//	root=obj.insert(root,46);
//	root=obj.insert(root,55);
//	root=obj.insert(root,65);
//	obj.inorder(root);
//	cout<<endl;
//	root=obj.deletenode(root,30);
//	obj.inorder(root);
//}
















//#include <bits/stdc++.h>
//using namespace std;
//
//struct Node  
//{ 
//  int key; 
//  struct Node *left; 
//  struct Node *right; 
//  Node(int k){
//      key=k;
//      left=right=NULL;
//  }
//};
//
//Node *getSuccessor(Node *curr){
//    curr=curr->right;
//    while(curr!=NULL && curr->left!=NULL)
//        curr=curr->left;
//    return curr;
//}
//
//Node *delNode(Node *root, int x){
//    if(root==NULL)
//        return root;
//    if(root->key>x)
//        root->left=delNode(root->left,x);
//    else if(root->key<x)
//        root->right=delNode(root->right,x);
//    else{
//        if(root->left==NULL){
//            Node *temp=root->right;
//            delete root;
//            return temp;
//        }
//        else if(root->right==NULL){
//            Node *temp=root->left;
//            delete root;
//            return temp;
//        }
//        else{
//            Node *succ=getSuccessor(root);
//            root->key=succ->key;
//            root->right=delNode(root->right,succ->key);
//        }
//    }
//    return root;
//} 
//
//void inorder(Node *root){
//    if(root!=NULL){
//        inorder(root->left);
//        cout<<root->key<<" ";
//        inorder(root->right);    
//    }
//} 
//int main() {
//	
//	Node *root=new Node(10);
//	root->left=new Node(5);
//	root->right=new Node(15);
//	root->right->left=new Node(12);
//	root->right->right=new Node(18);
//	int x=15;
//	
//	root=delNode(root,x);
//	inorder(root);
//}




















