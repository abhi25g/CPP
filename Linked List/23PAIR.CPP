#include<iostream.h>
#include<conio.h>
#include<linklist.h>
#include<process.h>
void main()
{
	clrscr();
	ll l1;
	node *ptr=0,*prev=0,*temp=0;
	cout<<"\nEnter the linked list ";
	l1.input();
	ptr=l1.head->next;
	prev=l1.head;
	l1.head=ptr;
	while(prev&&ptr)
	{
		if(ptr->next==0)
			l1.tail=prev;
		temp=ptr->next;
		if(temp->next)
			prev->next=temp->next;
		else
			prev->next=temp;
		ptr->next=prev;
		prev=temp;
		ptr=prev->next;
	}
	l1.print();
	getch();
}
