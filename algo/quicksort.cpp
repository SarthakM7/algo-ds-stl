#include<bits/stdc++.h>
using namespace std;

int partition(int a[],int l,int h)
{
	int i=l,j=h;
	int p=a[l];
	while(i<j)
	{
		do
		i++;
		while(a[i]<p);
		
		do
		j--;
		while(a[j]>p);
		
		if(i<j)
		swap(a[i],a[j]);
	}
	swap(a[l],a[j]);
	return j;
}

int quick(int a[],int l,int h)
{
	if(l<h)
	{
		int p=partition(a,l,h);
		quick(a,l,p);
		quick(a,p+1,h);
	}
}

int main()
{
	int a[]={1,2,7,-1,3,99,8,0,3};
	quick(a,0,9);
	for(int i=0;i<9;i++)
	cout<<a[i]<<" ";
}
