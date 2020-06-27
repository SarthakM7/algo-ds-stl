#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<int>v(n);
	for(int i=0;i<n;i++)
	cin>>v[i];
	int s=accumulate(v.begin(),v.end(),0);
	vector<int> :: iterator itr;
	vector<int> :: iterator itr2;
	int flag=0;
	for(itr=v.begin();itr<v.end();itr++)
	{
		int s1,s2;
		s1=accumulate(v.begin(),itr,0);
		s2=accumulate(itr+1,v.end(),0);
		if(s1==s2)
		{
			cout<<"yess";
			break;
		}
		else if(s1>s2)
		{
			int z=s1-s2;
			for(itr2=itr+1;itr<=v.end();itr++)
			{
				if(*itr2==z)
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
			for(itr2=v.begin();itr<=itr+1;itr++)
			{
				if(*itr2==z)
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
