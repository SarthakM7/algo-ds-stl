#include<bits/stdc++.h>
using namespace std;
struct node
{
	int data;
	struct node *next;
}*ptr,*pre,*head=NULL,*newn,*post;
void display(struct node *head)
{
	cout<<"indis"<<endl;
	ptr=head;
	while(ptr!=NULL)
	{
		cout<<ptr->data<<"_";
		ptr=ptr->next;
	}
}
struct node *reverse(struct node *head)
{
	post=pre=NULL;
	ptr=head;
	while(ptr!=NULL)
	{
		post=ptr->next;
		ptr->next=pre;
		pre=ptr;
		ptr=post;
	}
	head=pre;
	return head;
}
void insaf(struct node *head,int num,int inp)
{
	newn=(struct node*)malloc(sizeof(struct node));
	newn->data=inp;
	ptr=head;
	while(ptr->data!=num)
		ptr=ptr->next;
	struct node *temp;
	temp=ptr->next;
	ptr->next=newn;
	newn->next=temp;
}
void delet(struct node*head,int num)
{
	ptr=head;
	while(ptr->next->data!=num)
		ptr=ptr->next;
	struct node *temp;
	ptr->next=ptr->next->next;
}
int main()
{
	int n;
	cout<<"total?"<<endl;
	cin>>n;
	cout<<"enter"<<endl;
	while(n--)
	{
		int z;
		cin>>z;
		newn=(struct node*)malloc(sizeof(struct node));
		newn->data=z;
		newn->next=NULL;
		ptr=head;
		if(head==NULL)
			head=newn;
		else
		{
			while(ptr->next!=NULL)
				ptr=ptr->next;
			ptr->next=newn;
		}
	}
	cout<<"donmake"<<endl;	
	int num;
	struct node *trial;
	trial = reverse(head);
	display(trial);
}
