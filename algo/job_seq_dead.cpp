#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n=5;
	int p[]={100,60,40,20,20};	 // should be in descending
	int d[]={1,2,2,3,1};
	int c[3]={0}; //since 3 is d-max
	
	for(int i=0;i<n;i++)
	
		for(int j=d[i]-1;j>=0;j--)
		{
			if(c[j]==0)
			{
				c[j]=p[i];
				break;
			}
		}
	
	for(int i=0;i<3;i++)
	cout<<c[i]<<" ";
	return 0;
}

