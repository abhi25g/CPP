#include<iostream.h>
#include<conio.h>
#include<linklist.h>
#include<process.h>
void main()
{
	clrscr();
	ll l1;
	cout<<"\nEnter the linked list ";
	l1.input();
	node *prev=l1.head, *ptr=l1.head->next;
	while(ptr)
	{
		if(ptr->info<0)
		{
			prev->next=ptr->next;
			ptr->next=l1.head;
			l1.head=ptr;
			if(ptr==l1.tail)
			{
				l1.tail=prev;
				l1.tail->next=0;
			}
		}
		else
			prev=ptr;
		ptr=prev->next;
	}
	cout<<"\nThe sorted list is ";
	l1.print();
	getch();
}