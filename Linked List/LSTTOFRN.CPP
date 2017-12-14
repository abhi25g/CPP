#include<iostream.h>
#include<conio.h>
#include<linklist.h>
void main()
{
	clrscr();
	ll l1;
	cout<<"\nEnter the linked list ";
	l1.input();
	node *ptr=l1.head;
	if(l1.head!=l1.tail)
	{
		while(ptr->next!=l1.tail)
		{
			ptr=ptr->next;
		}
		l1.tail->next=l1.head;
		l1.head=ptr->next;
		ptr->next=0;
		l1.tail=ptr;
	}
	l1.print();
	getch();
}