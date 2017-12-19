#include<iostream.h>
#include<conio.h>
#include<linklist.h>
void main()
{
	clrscr();
	node *ptr1=0,*ptr2=0,*ptr=0;
	ll l3;
	ll l1;
	cout<<"\nEnter the 1st linked list in sorted order ";
	l1.input();
	ll l2;
	cout<<"\nEnter the 2nd linked list in sorted order ";
	l2.input();
	ptr1=l1.head;
	ptr2=l2.head;
	if(ptr1->info<ptr2->info)
	{
		ptr=ptr1;
		ptr1=ptr1->next;
	}
	else
	{
		ptr=ptr2;
		ptr2=ptr2->next;
	}
	l3.head=l3.tail=ptr;
	l3.tail->next=0;
	while(ptr1&&ptr2)
	{
		if(ptr1->info<ptr2->info)
		{
			l3.head=new node(ptr1->info,l3.head);
			ptr1=ptr1->next;
		}
		else
		{
			l3.head=new node(ptr2->info,l3.head);
			ptr2=ptr2->next;
		}
	}
	while(ptr1)
	{
		l3.head=new node(ptr1->info,l3.head);
		ptr1=ptr1->next;
	}
	while(ptr2)
	{
		l3.head=new node(ptr2->info,l3.head);
		ptr2=ptr2->next;
	}
	cout<<"\nThe merged list in reverse order is ";
	l3.print();
	getch();
}