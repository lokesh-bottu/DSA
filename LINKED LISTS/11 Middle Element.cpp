////Own code
//#include<iostream>
//using namespace std;
//class node
//{
//	public:
//	int key;
//	node *next;
//	node *insert(node *head,int key);
//	void display(node *head);
//	node *findmiddle(node *head);
//};
//
//node* node::findmiddle(node *head)
//{
//	cout<<"Find middle called"<<endl;
//	node *slow =head;
//	node *fast= head;
//	while(true)
//	{
//		if(fast->next!=NULL)
//		{
//			if(fast->next->next!=NULL)
//			{
//				slow= slow->next;
//				fast= fast->next->next;
//			}
//			else
//				break;
//		}
//		else
//			break;		
//	}
//	return slow;	
//}
//node* node::insert(node *head,int key)
//{
//	node *temp = new node;
//	temp->key = key;
//	temp->next = NULL;
//	if(head==NULL)
//	{
//		return temp;
//	}
//	else
//	{
//		node *cur = head;
//		while(cur->next!=NULL)
//		{
//			cur=cur->next;	
//		}
//		cur->next=temp;
//		return head;
//	}	
//}
//void node::display(node *head)
//{
//	cout<<"Display called"<<endl;
//	node * cur = head;
//	while(cur!=NULL)
//	{
//		cout<<cur->key<<" ";
//		cur=cur->next;
//	}
//}
//int main()
//{
//	node * head=NULL;
//	node n;
//	head=n.insert(head,12);
//	head= n.insert(head,14);
////	head= n.insert(head,15);
////	head= n.insert(head,16);
////	head= n.insert(head,17);
////	head= n.insert(head,18);
//	n.display(head);
////	node * middle = n.findmiddle(head);
////	cout<<"Middle " <<middle->key;
//}
//
//



//Own code
#include<iostream>
using namespace std;
class node
{
	public:
	int key;
	node *next;
	node *insert(node *head,int key);
	void display(node *head);
	node *findmiddle(node *head);
};

node* node::findmiddle(node *head)
{
	cout<<"Find middle called"<<endl;
	node *slow =head;
	node *fast= head;
	while(true) {
            if(fast->next==NULL){
            	cout<<"If"<<endl;
                break;
            }
            else if(fast->next!=NULL && fast->next->next!=NULL){
                fast = fast->next->next;
                slow = slow->next;
                cout<<"Else if1"<<endl;
            }
            else if (fast->next !=NULL && fast->next->next == NULL){
                slow = slow->next;
                cout<<"Else if2"<<endl;
                break;
            }
        }
	return slow;	
}
node* node::insert(node *head,int key)
{
	node *temp = new node;
	temp->key = key;
	temp->next = NULL;
	if(head==NULL)
	{
		return temp;
	}
	else
	{
		node *cur = head;
		while(cur->next!=NULL)
		{
			cur=cur->next;	
		}
		cur->next=temp;
		return head;
	}	
}
void node::display(node *head)
{
	cout<<"Display called"<<endl;
	node * cur = head;
	while(cur!=NULL)
	{
		cout<<cur->key<<" ";
		cur=cur->next;
	}
}
int main()
{
	node * head=NULL;
	node n;
	head=n.insert(head,1);
	head= n.insert(head,2);
	head= n.insert(head,3);
	head= n.insert(head,4);
	head= n.insert(head,5);
	head= n.insert(head,6);
	n.display(head);
	node * middle = n.findmiddle(head);
	cout<<"Middle " <<middle->key;
}



