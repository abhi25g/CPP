#include<iostream.h>
#include<conio.h>
#include<linklist.h>
#include<process.h>
node* reverse(node*head, int k)
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
	node*ptr=front, *prev=0, *temp=ptr->next;
	while(ptr!=nxt)
	{
		ptr->next=prev;
		prev=ptr;
		ptr=temp;
		temp=temp->next;
	}
	front->next=reverse(nxt,k);
	return last;
}
void main()
{
	clrscr();
	ll l1;
	int k;
	cout<<"\nEnter the linked list ";
	l1.input();
	cout<<"\nEnter the block size ";
	cin>>k;
	l1.head=reverse(l1.head,k);
	l1.print();
	getch();
}