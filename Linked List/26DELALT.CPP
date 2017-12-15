#include<iostream.h>
#include<conio.h>
#include<linklist.h>
void main()
{
	clrscr();
	ll l1;
	cout<<"\nEnter the linked list ";
	l1.input();
	node *prev=l1.head,*ptr=l1.head->next;
	while(ptr)
	{
		prev->next=ptr->next;
		delete ptr;
		prev=prev->next;
		ptr=prev->next;
	}
	l1.tail=prev;
	l1.print();
	getch();
}