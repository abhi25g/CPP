#include<iostream.h>
#include<conio.h>
#include<linklist.h>
#include<process.h>
node* select(node*head)
{
	if(!head)
		return 0;
	node *prev=0, *min=head, *ptr=head;
	while(ptr->next)
	{
		if(ptr->next->info<min->info)
		{
			prev=ptr;
			min=ptr->next;
		}
		ptr=ptr->next;
	}
	if(prev)
		prev->next=min->next;
	else
		head=head->next;
	min->next=select(head);
	return min;
}
void main()
{
	clrscr();
	ll l1;
	cout<<"\nEnter the linked list ";
	l1.input();
	l1.head=select(l1.head);
	l1.print();
	getch();
}