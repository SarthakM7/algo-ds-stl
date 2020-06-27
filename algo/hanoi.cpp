#include<bits/stdc++.h>
using namespace std;
int counters=0;
void hanoi(int n,char source,char spare,char dest)
{
	if (n==1)
	{
	
		cout<<"move from "<<source<<" to "<<dest<<endl;
		counters++;
	}
	else
	{
		hanoi(n-1,source,dest,spare);
		hanoi(1,source,spare,dest);
		hanoi(n-1,spare,source,dest);
	}
}
int main()
{
	int n;
	cin>>n;
	hanoi(n,'a','b','c');
	cout<<"steps: "<<counters;
}
