#include<iostream>
#include<stdlib.h>
using namespace std;
struct node
{
	int data;
	struct node * next;
};
struct node * start=NULL;

void push(int a)
{
	struct node *temp;
	temp=(node *)malloc(sizeof(node));
	temp->data=a;
	if(start==NULL)
	{
		start=temp;
		temp->next=NULL;
	}
	else
	{
		temp->next=start;
		start=temp;
	}
}

int pop()
{
	struct node * temp;
	int n;
	if(start==NULL)
	{
		cout<<"UNDERFLOW";
	}
	else
	{
		temp=start;
		start=start->next;
		n=temp->data;
		free(temp);
	}
	return n;
}
void display()
{
	struct node * p;
	p=start;
	while(p!=NULL)
	{
		cout<<p->data<<",";
		p=p->next;
	}
}
int main()
{
	push(5);
	push(4);
	push(3);
	push(5);
	push(2);
	push(1);
	push(5);
	push(3);
	display();
	cout<<endl;
	pop();
	pop();
	pop();
	pop();
	display();
}
