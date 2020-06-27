#include<iostream>
#include<conio.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	map<int,int>a;
	a[1]=45;
	a[232]=333;
	a[-2]=99;
	cout<<sizeof(a)<<endl;
	cout<<a.size()<<endl;
	cout<<a[1]<<endl;// answer = 0 
	cout<<a[44]<<endl;// answer = 0 	
	cout<<"/////"<<endl;
	map<char,int>m;
	string x="sarthak mishra";
	map<char,int>:: iterator itr;
	m['z']=7;
	cout<<x[4]<<endl;
	char c;
	for (int i=0; i<x.size(); i++ )
	{
		c=x[i];
		m[c]++;	
	}
	cout<<endl;
	cout<<m['a'];
	//   							""""   ALSO UNORDERED MAP  """"
}	
