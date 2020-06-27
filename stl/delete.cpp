#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int v[n];
	for(int i=0;i<n;i++)
	cin>>v[i];
	int s=accumulate(v,v+n,0);
	int flag=0;
	for(int i=0;i<n-1;i++)
	{
		int s1,s2;
		s1=accumulate(v,v+i,0);
		s2=accumulate(v+i+1,v+n,0);
		if(s1==s/2)
		{
			cout<<"yess";
			break;
		}
		else if(s1>s/2)
		{
			int z=s1-s2;
			for(int j=v[i+1];j<=v[n-1];j++)
			{
				if(v[j]==z)
				{
					cout<<"yess";
					flag=1;
					break;
				}
			}
		}
		else
		{
			int z=s2-s1;
			for(int j=v[0];j<=v[i+1];j++)
			{
				if(v[j]==z)
				{
					cout<<"yess";
					flag=1;
					break;
				}
			}	
		}
		if(flag==1)
		break;
	}
}
