#include<iostream.h>
#include<conio.h>
#include<linklist.h>
void main()
{
	clrscr();
	ll l1;
	cout<<"\nEnter the linked list ";
	l1.input();
	cout<<"\nThe linked list is ";
	l1.print();
	node*ptr=l1.head->next, *prev=l1.head, *temp=ptr->next;
	while(ptr)
	{
		ptr->next=prev;
		prev=ptr;
		ptr=temp;
		temp=temp->next;
	}
	temp=l1.head;
	l1.head=l1.tail;
	l1.tail=temp;
	l1.tail->next=0;
	cout<<"\nThe reversed list is ";
	l1.print();
	getch();
}