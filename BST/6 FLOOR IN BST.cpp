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
//Node *floor(Node *root, int x){
//    Node *res=NULL;
//    while(root!=NULL){
//        if(root->key==x)
//            return root;
//        else if(root->key>x)
//            root=root->left;
//        else{
//            res=root;
//            root=root->right;
//        }
//    }
//    return res;
//} 
//
//int main() {
//	
//	Node *root=new Node(15);
//	root->left=new Node(5);
//	root->left->left=new Node(3);
//	root->right=new Node(20);
//	root->right->left=new Node(18);
//	root->right->left->left=new Node(16);
//	root->right->right=new Node(80);
//	int x=17;
//	cout<<"Floor: "<<(floor(root,17)->key);
//}




//
//#include<iostream>
//using namespace std;
//class node
//{
//	public:
//		node *left,*right,*cur,*parent;
//		int key;
//		node()
//		{
//			left=NULL;
//			right=NULL;
//		}
//		node *insert(node *root,int key);
//		void *inorder(node *root);
//		node *findfloat(node *root,int key);		
//};
//node* node::findfloat(node *root,int key)
//{
//	cur=root;
//	cout<<cur->key<<endl;
//	while(cur!=NULL)
//	{
//		if(cur->key==key)
//		{
//			return cur;
//		}
//		if(cur->key<key)
//		{
//			if((cur->right==NULL)&&(cur->key>key))
//			{
//				return cur;
//			}
//			cur=cur->right;
//			cout<<cur->key<<endl;
//		}
//		else if(cur->key>key)
//		{
//			if(cur->left==NULL&&(cur->key>key))
//			{
//				return cur;
//			}
//			cur=cur->left;
//			cout<<cur->key<<endl;
//		}
//	}
//}
//void *node::inorder(node *root)
//{
//	if(root!=NULL)
//	{
//		inorder(root->left);
//		cout<<root->key<<"  ";
//		inorder(root->right);
//	}
//}
//node *node::insert(node *root,int key)
//{
//	node *temp=new node;
//	temp->key=key;
//	if(root==NULL)
//	{
//		return temp;
//	}
//	else
//	{
//		cur=root;
//		while(cur!=NULL)
//		{
//			parent=cur;
//			if(cur->key>key)
//			{
//				cur=cur->left;
//			}
//			else
//			{
//				cur=cur->right;
//			}
//		}
//		if(parent->key>key)
//		{
//			parent->left=temp;
//		}
//		else
//		{
//			parent->right=temp;
//		}
//	}
//	return root;
//}
//int main()
//{
//	node n;
//	node *root=NULL;
//	node *add=NULL;
//	root=n.insert(root,40);
//	root=n.insert(root,30);
//	root=n.insert(root,50);
//	root=n.insert(root,25);
//	root=n.insert(root,35);
//	root=n.insert(root,45);
//	root=n.insert(root,60);
//	root=n.insert(root,20);
//	root=n.insert(root,26);
//	root=n.insert(root,34);
//	root=n.insert(root,36);
//	root=n.insert(root,44);
//	root=n.insert(root,46);
//	root=n.insert(root,55);
//	root=n.insert(root,65);
//	root=n.insert(root,70);
//	root=n.insert(root,43);	
//	root=n.insert(root,38);	
//	n.inorder(root);
//	cout<<"Add"<<endl;
//	add=n.findfloat(root,37);
//	cout<<"Add"<<add->key;
//}

