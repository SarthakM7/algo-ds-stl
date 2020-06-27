	#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n=7;
	int wmax=15;
	float w[n]={2,5,7,3,6,6,8};
	int p[n]={231,2,45,6,87,9,325};
	float r[n];
	float x[n]={0};
	for(int i=0;i<n;i++)
	r[i]=p[i]/w[i];
	for(int i=0;i<n-1;i++)
	for(int j=0;j<n-i-1;j++)
	{
		if(r[j]<r[j+1])
		{
			swap(r[j],r[j+1]);
			swap(w[j],w[j+1]);
			swap(p[j],p[j+1]);
		}
	}
	for(int i=0;i<n;i++)
	{
		if(w[i]<wmax)
		{
			wmax=wmax-w[i];
			x[i]=1;
		}
		else
		{
			float z=(wmax+0.0)/w[i];
			cout<<"z="<<z<<endl;
			x[i]=z;
			break;
		}
	}
	float sum=0;
	for(int i=0;i<n;i++)
	sum+=p[i]*x[i]+0.0;
	cout<<sum;
}
