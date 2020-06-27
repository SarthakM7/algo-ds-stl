#include<iostream>
#include<conio.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	set<int>s;
	s.insert(1);
	s.insert(2);
	s.insert(-1);
	s.insert(-10);
	set< int > :: iterator it;
	for(it=s.begin();it!=s.end();it++)
	cout<<*it<<" ";	
	cout<<endl;
	int x=2;
	it=s.find(x);
	if(it==s.end())
	cout<<"not found"<<endl;	
	else 
	cout<<"found"<<endl;
	cout<<"erasing -1"<<endl;
	s.erase(-1);
	for(it=s.begin();it!=s.end();it++)
	cout<<*it<<" ";	
	cout<<endl;
	//upper_bound,lower_bound,.....
}

