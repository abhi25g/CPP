#include<iostream.h>
#include<conio.h>
#include<linklist.h>
#include<process.h>
node* rotate(node*head, int k, int d)
{
	if(!head||!head->next)
		return head;
	node *front=head, *last=head, *nxt;
	for(int i=0;i<k-1;i++)
	{
		if(!last->next)
			break;
		last=last->next;
	}
	nxt=last->next;
	node*ptr=front;
	if(d!=0)
	{
		last->next=front;
		ptr=front;
		for(int i=1;i<d;i++)
		{
			ptr=ptr->next;
		}
		front=ptr->next;
	}
	ptr->next=rotate(nxt,k,d);
	return front;
}
void main()
{
	clrscr();
	ll l1;
	int k,d=0;
	cout<<"\nEnter the linked list ";
	l1.input();
	cout<<"\nEnter the block size ";
	cin>>k;
	cout<<"\nEnter the number of places you want to rotate ";
	cin>>d;
	d=d%k;
	l1.head=rotate(l1.head,k,d);
	l1.print();
	getch();
}