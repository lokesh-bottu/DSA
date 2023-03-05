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
		node *insert(node *head,int key)
		{
			node *temp=new node();
			node *parent;
			temp->key=key;
		temp->left=NULL;
		temp->right=NULL;
		if(head==NULL)
		{
			head=temp;
			return head;
		}
		node *cur=head;
		cout<<"-----While-----"<<endl;
		while(cur!=NULL)
		{
			
			parent=cur;
			if(key>(cur->key))
			{
				cur=cur->right;
				cout<<"Right"<<endl;
			}
			else
			{
				cur=cur->left;
				cout<<"Left"<<endl;
			}
		}
		cout<<"-----------if-------"<<endl;
		if((parent->key)<key)
		{
			parent->right=temp;
//			cout<<"Right"<<endl;
		}
		else
		{
			parent->left=temp;
//			cout<<"Left"<<endl;
		}
		cout<<temp->key<<"Done"<<endl;
		return head;		
	}	
};
int main()
{
	node obj;
	node *head=NULL;
	head=obj.insert(head,15);
	head=obj.insert(head,25);
	head=obj.insert(head,17);
	head=obj.insert(head,21);
	head=obj.insert(head,19);
	head=obj.insert(head,24);
//	head=obj.insert(head,21);
//	head=obj.insert(head,21);
}













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
//Node *insert(Node *root, int x){
//    Node *temp=new Node(x);
//    Node *parent=NULL,*curr=root;
//    while(curr!=NULL){
//        parent=curr;
//        if(curr->key>x)
//            curr=curr->left;
//        else if(curr->key<x)
//            curr=curr->right;
//        else
//            return root;
//    }
//    if(parent==NULL)
//        return temp;
//    if(parent->key>x)
//        parent->left=temp;
//    else
//        parent->right=temp;
//    return root;
//} 
//
//
//void inorder(Node *root){
//    if(root!=NULL){
//        inorder(root->left);
//        cout<<root->key<<" ";
//        inorder(root->right);    
//    }
//}
//
//void postorder(Node *root){
//    if(root!=NULL){
//        postorder(root->left);
//        postorder(root->right);    
//        cout<<root->key<<" ";
//    }
//}
//
//void preorder(Node *root){
//    if(root!=NULL){
//    	cout<<root->key<<" ";
//        preorder(root->left);
//        preorder(root->right);   
//    }
//}
//int main() 
//{
//	Node *root=new Node(40);
//	root=insert(root,30);
//	root=insert(root,50);
//	root=insert(root,25);
//	root=insert(root,35);
//	root=insert(root,45);
//	root=insert(root,60);
//	root=insert(root,20);
//	root=insert(root,26);
//	root=insert(root,34);
//	root=insert(root,36);
//	root=insert(root,44);
//	root=insert(root,46);
//	root=insert(root,55);
//	root=insert(root,65);
//	inorder(root);
//	cout<<endl;
//	postorder(root);
//	cout<<endl;
//	preorder(root);
//}






//
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
//Node *insert(Node *root, int x){
//    Node *temp=new Node(x);
//    Node *parent=NULL,*curr=root;
//    while(curr!=NULL){
//        parent=curr;
//        if(curr->key>x)
//            curr=curr->left;
//        else if(curr->key<x)
//            curr=curr->right;
//        else
//            return root;
//    }
//    if(parent==NULL)
//        return temp;
//    if(parent->key>x)
//        parent->left=temp;
//    else
//        parent->right=temp;
//    return root;
//} 
//
//
//void inorder(Node *root){
//    if(root!=NULL){
//        inorder(root->left);
//        cout<<root->key<<" ";
//        inorder(root->right);    
//    }
//}
//int main() 
//{
//	Node *root=new Node(40);
//	root->left=new Node(30);
//	root->right=new Node(50);
//	root->right->left=new Node(25);
//	root->right->right=new Node(35);
//	int x=20;
//	root=insert(root,x);
//	root=insert(root,26);
//	root=insert(root,34);
//	root=insert(root,36);
//	root=insert(root,45);
//	root=insert(root,60);
//	root=insert(root,44);
//	root=insert(root,46);
//	root=insert(root,55);
//	root=insert(root,65);
//	inorder(root);
//}
