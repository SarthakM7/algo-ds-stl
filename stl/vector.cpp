#include<iostream>
#include<conio.h>
#include<bits/stdc++.h>
using namespace std;
bool f(int x,int y)
{
	return x>y;
}
void display(vector<int> v)
{
	cout<<"elements: ";
	
	for(int i=0;i<v.size();i++)
	cout<<v[i]<<" ";
	cout<<endl;
	/* 
	or
	vector<int> :: iterator itr;
	for(itr=v.begin();itr<v.end();itr++)
	cout<<*itr<<" ";
	cout<<endl;
	*/
}
int main()
{
	vector<int> v;
	int x;
	cout<<"size now ="<<v.size()<<endl;
	cout<<"enter 5 nos.";
	for(int i=0;i<5;i++)
	{
		cin>>x;
		v.push_back(x);
	}
	cout<<"size now ="<<v.size()<<endl;
	cout<<"elements:";
	display(v);
	cout<<"pushing 9.5432"<<endl;
	getch();
	v.push_back(9.5432);
	cout<<"size now ="<<v.size()<<endl;
	display(v);
	vector<int> :: iterator itr;
	cout<<"(\\itr=v.begin();itr=itr+3;//)"<<endl;
	itr=v.begin();
	itr=itr+3;
	cout<<"inserting itr,1,0\n";
	getch();
	v.insert(itr,1,0);
	display(v);
	cout<<"now erasing begin+1,begin+3"<<endl;
	getch();
	v.erase(v.begin()+1,v.begin()+3);//erase(m,n) deletes n-m elements->starting from m-th element and n-th element is not deleted.
	display(v);
	cout<<"END";
	cout<<endl<<"capacity:"<<v.capacity()<<endl;
	cout<<"sorting"<<endl;
	sort(v.begin(),v.end(),f);
	display(v);
	bool present;
	present=binary_search(v.begin(),v.end(),80);
	cout<<present;
	vector<int> :: iterator itr2;
	vector<int> :: iterator itr3;	
	itr2=lower_bound(v.begin(),v.end(),5);
	itr3=upper_bound(v.begin(),v.end(),5);
	cout<<itr3-itr2;	
}
