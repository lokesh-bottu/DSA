



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
//    if(root==NULL)
//        return new Node(x);
//    if(root->key<x)
//        root->right=insert(root->right,x);
//    else if(root->key>x)
//        root->left=insert(root->left,x);
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
//	int x=20;
//	
//	root=insert(root,x);
//	inorder(root);
//}

























#include <bits/stdc++.h>
using namespace std;

struct Node  
{ 
  int key; 
  struct Node *left; 
  struct Node *right; 
  Node(int k){
      key=k;
      left=right=NULL;
  }
};

Node *insert(Node *root, int x){
    if(root==NULL)
        return new Node(x);
    if(root->key<x)
        root->right=insert(root->right,x);
    else if(root->key>x)
        root->left=insert(root->left,x);
    return root;
} 

void inorder(Node *root){
    if(root!=NULL){
        inorder(root->left);
        cout<<root->key<<" ";
        inorder(root->right);    
    }
} 
//int func(struct Node *root)
//{
//	if(root==NULL)
//	{
//		return 0;
//	}
//	if(root->left==NULL && root->right==NULL)		//returns total number of internal nodes
//	{
//		return 0;
//	}
//	else
//	{
//		return 1+func(root->left)+func(root->right);
//	}
//}


//
//int func(struct Node *root)
//{
//	if(root==NULL)
//	{
//		return 0;
//	}
//	if(root->left==NULL && root->right==NULL)		//returns total number of leaf nodes
//	{
//		return 1;
//	}
//	else
//	{
//		return func(root->left)+func(root->right);
//	}
//}

//int value(struct Node *root)
//{
//	if(root->left==NULL)		//return node with min value
//	{
//		return root->key;
//	}
//	return value(root->left);
//}




int main() {
	Node *root=insert(NULL,14);
	root=insert(root,4);
	root=insert(root,21);
	root=insert(root,3);
	root=insert(root,9);
	root=insert(root,15);
	root=insert(root,28);
	root=insert(root,2);
	root=insert(root,7);
	root=insert(root,10);
	root=insert(root,18);
	root=insert(root,26);
	root=insert(root,30);
	cout<<"-----Inorder-------"<<endl;
	inorder(root);
	cout<<endl;
//	int a=func(root);
int a=value(root);
	cout<<"A :"<<a<<endl;
}







//
//root=insert(root,4);
//	root=insert(root,21);
//	root=insert(root,3);
//	root=insert(root,9);
//	root=insert(root,15);
//	root=insert(root,28);
//	root=insert(root,2);
//	root=insert(root,7);
//	root=insert(root,10);
//	root=insert(root,18);
//	root=insert(root,26);
//	root=insert(root,30);
