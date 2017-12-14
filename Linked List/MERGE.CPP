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
	l3.head=ptr;
	while(ptr1&&ptr2)
	{
		if(ptr1->info<ptr2->info)
		{
			ptr->next=ptr1;
			ptr1=ptr1->next;
		}
		else
		{
			ptr->next=ptr2;
			ptr2=ptr2->next;
		}
		ptr=ptr->next;
	}
	if(ptr1)
	{
		ptr->next=ptr1;
		l3.tail=l1.tail;
	}
	if(ptr2)
	{
		ptr->next=ptr2;
		l3.tail=l2.tail;
	}
	cout<<"\nThe merged list is ";
	l3.print();
	getch();
}