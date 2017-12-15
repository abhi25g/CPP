#include<iostream.h>
#include<conio.h>
#include<linklist.h>
void main()
{
	clrscr();
	ll l1;
	cout<<"\nEnter the linked list in sorted order ";
	l1.input();
	node *ptr=l1.head,*prev=0;
	while(ptr->next)
	{
		if(ptr->next->info!=ptr->info)
		{
			prev=ptr;
			ptr=ptr->next;
			continue;
		}
		node*temp=ptr;
		while(temp->next->info==temp->info)
		{
			prev=ptr;
			ptr=ptr->next;
			prev->next=ptr->next;
			delete ptr;
			ptr=prev=prev;
		}
	}
	l1.tail=ptr;
	l1.print();
	getch();
}