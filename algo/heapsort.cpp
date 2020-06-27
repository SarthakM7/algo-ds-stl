#include<bits/stdc++.h>
using namespace std;
int heapify(int a[],int n,int i)
{
	int large=i,l=i*2,r=i*2+1;
	if(l<n && a[l]>a[i])
	large=l;
	if(r<n && a[r]>a[i])
	large=r;
	if(large!=i)
	{
		swap(a[large],a[i]);
		heapify(a,n,large);
	}
}
int heapsort(int a[],int n)
{
	for(int i=n/2-1;i>=0;i--)
	heapify(a,n,i);
	for(int i=n-1;i>=0;i--)
	{
		swap(a[0],a[i]);
		heapify(a,i,0);
	}
}
int main()
{
	int a[]={211,123,34,6,8,9};
	heapsort(a,6);
	for(int i=0;i<6;i++)
	cout<<a[i]<<" ";
}
