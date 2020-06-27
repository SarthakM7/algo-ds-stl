#include<bits/stdc++.h>
using namespace std;
int fib1(int n)
{	
	int first=0,second=1;
	while(n--)
	{
		cout<<first<<" ";
		int temp=first;
		first=second;
		second=first+temp;
	}
}
int fib2(int n)
{
	if(n==0 | n==1)
	return n;
	else 
	return fib2(n-1)+fib2(n-2);
}
rec(int x,int y)
{
	if(x%y==0)
	return y;
	else
	rec(y,x%y );
}
int main()
{
	int n;
	cin>>n;
	//fib1(n);
	for(int i=0;i<n;i++)
	cout<<fib2(i)<<" ";
}
