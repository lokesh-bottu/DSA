




//Use returrn Statement for accuracy with functions

#include<iostream>
#include<vector>
using namespace std;
int main()
{
	string s; 
	vector <char> arr;
	cout<<"Enter the String: ";
	cin>>s;
	int n = s.length();
	for(int i =0;i<n;i++)
	{
		if(s[i]=='{' or s[i]=='[' or s[i]=='('){
			arr.push_back(s[i]);
		}
		else {
			if(s[i]=='}') {
				if(arr.empty() || arr.back()!='{'){
					cout<<"False"<<endl;
				}
				else{
					arr.pop_back();
				}
			}
			else if(s[i]==')') 
			{
				if(arr.empty() || arr.back()!='('){
					cout<<"False"<<endl;
				}
				else {
					arr.pop_back();
				}
			
			}
			else if(s[i]==']') 
			{
				if(arr.empty() || arr.back()!='['){
					cout<<"False"<<endl;
				}
				else{
					arr.pop_back();
				}
			}
		}
	}
	if(arr.empty()){
		cout<<"True Last"<<endl;
	}
	else{
		cout<<"False last"<<endl;
	}
}
