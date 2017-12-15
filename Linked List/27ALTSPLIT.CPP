#include<iostream.h>
#include<conio.h>
#include<linklist.h>
void main()
{
	clrscr();
	ll l1,l2,l3;
	node *ptr1,*ptr2;
	cout<<"\nEnter the linked list ";
	l1.input();
	ptr1=l2.head=l1.head;
	ptr2=l3.head=l1.head->next;
	while(ptr1->next&&ptr2->next)
	{
		ptr1->next=ptr2->next;
		ptr1=ptr1->next;
		ptr2->next=ptr1->next;
		ptr2=ptr2->next;
	}
	ptr1->next=0;
	ptr2->next=0;
	l2.tail=ptr1;
	l3.tail=ptr2;
	l2.print();
	cout<<"\n";
	l3.print();
	getch();
}