
#include<stdio.h>
#include<malloc.h>
struct node
{
	int data;
	struct node *next;
}*head=NULL,*new_node,*preptr,*ptr=head;

void display(struct node *head)  //DISPLAY
{
	ptr=head;
	while(ptr!=NULL)
	{
		printf("%d_",ptr->data);
		ptr=ptr->next;
	}	
}

int main()
{
	int n,num2,i,count,num=0;
	printf("total ? \n");
	scanf("%d",&n);
	printf("enter\n");   //CREATION OF LIST
	for(i=0;i<n;i++)
	{
		scanf("%d",&num);
		count++;
		new_node=(struct node*)malloc(sizeof(struct node));
		new_node->data=num;
		new_node->next=NULL;
		ptr=head;
		if(head==NULL)
		{
			head=new_node;
		}
		else 
		{
			while(ptr->next!=NULL)
			ptr=ptr->next;
			ptr->next=new_node;
		}
	}
	display(head);
	
	printf("enter till \n"); //ENTER UPTO 
	ptr=head;
	scanf("%d",&num);
	while(ptr->data!=num)
	{
		printf("%d_",ptr->data);
		ptr=ptr->next;
	}
	printf("%d",ptr->data);

	
	printf("\n enter num to delete \n ");  //DELETION
		ptr=head;
	scanf("%d",&num);
	while(ptr->data!=num)
	{
		preptr=ptr;
		ptr=ptr->next;
	}
	preptr->next=ptr->next;
	free(ptr);
display(head);


	printf("enter num after which it is to be inserted \n");  //INSERTION OF A NEW NUMBER AFTER A NUMBER
	scanf("%d",&num);
	printf("enter the number to be inserted\n");
	scanf("%d",&num2);
	ptr=head;
	new_node=(struct node*)malloc(sizeof(struct node));
	new_node->data=num2;
	while(ptr->data!=num)
		{
		ptr=ptr->next;
		preptr=ptr->next;
		}	
	ptr->next=new_node;
	new_node->next=preptr;
	display(head);
}
 
