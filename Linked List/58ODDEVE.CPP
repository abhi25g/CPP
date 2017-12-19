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
	node *ptr1 = l1.head;
	node *ptr2 = l1.head->next, *temp=ptr2;
	if(l1.head==l1.tail||l1.head->next==l1.tail)
	{
		l1.print();
	}
	else
	{
		while(ptr1&&ptr2&&ptr2->next)
		{
			ptr1->next=ptr2->next;
			ptr1=ptr1->next;
			ptr2->next=ptr1->next;
			ptr2=ptr2->next;
		}
		ptr1->next=temp;
		l1.tail=ptr2;
		l1.tail->next=0;
		l1.print();
	}
	getch();
}