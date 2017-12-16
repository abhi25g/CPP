#include<iostream.h>
#include<conio.h>
#include<linklist.h>
void main()
{
	clrscr();
	ll l1,l2,l3;
	cout<<"\nEnter the 1st linked list";
	l1.input();
	cout<<"\nEnter the 2nd linked list";
	l2.input();
	node *ptr1=l1.head->next,*ptr2=l2.head,*ptr3=l1.head;
	while(ptr1&&ptr2)
	{
		ptr3->next=ptr2;
		ptr2=ptr2->next;
		ptr3=ptr3->next;
		ptr3->next=ptr1;
		ptr1=ptr1->next;
		ptr3=ptr3->next;
	}
	if(ptr1)
	{
		ptr3->next=ptr1;
		l1.tail=l1.tail;
	}
	if(ptr2)
	{
		ptr3->next=ptr2;
		l1.tail=l2.tail;
	}
	cout<<"\nThe merged list is ";
	l1.print();
	getch();
}