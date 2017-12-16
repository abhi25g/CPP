#include<iostream.h>
#include<conio.h>
#include<linklist.h>
#include<process.h>
void main()
{
	clrscr();
	ll l1;
	node*ptr=0,*prev=0,*temp;
	int k;
	cout<<"\nEnter the linked list ";
	l1.input();
	cout<<"\nEnter the number ";
	cin>>k;
	temp=l1.head;
	if(l1.head->info==k)
		ptr=l1.head;
	while(temp->next)
	{
		if(temp->next->info==k)
		{
			prev=temp;
			ptr=temp->next;
		}
		temp=temp->next;
	}
	if(ptr==l1.tail)
		l1.tail=prev;
	if(prev)
	{
		prev->next=ptr->next;
		delete ptr;
	}
	else
	{
		l1.head=ptr->next;
		delete ptr;
	}
	l1.print();
	getch();
}