
#include<bits/stdc++.h>
using namespace std;
int q[10];
int f=-1,r=-1;
void insert()
{
	cout<<"total?";
	int n;
	cin>>n;
	cout<<"start";
	while(n--)
	{
	int z;
	cin>>z;
	if(f==-1 && r==-1)
	f=r=0;
	else if (r==9)
	cout<<"overflow";
	else
	r++;
	q[r]=z;
	}
}
void delet()
{
	if(f==-1 || f>r)
	cout<<"underflow";
	else
	{
		int temp=q[f];
		f++;
		if(f>r)
		f=r=-1;
	}
}
void display()
{
	for(int i=f;i<=r;i++)
	{
		cout<<q[i]<<" ";
	}
}
int main()
{
	insert();
	delet();
	display();
}
