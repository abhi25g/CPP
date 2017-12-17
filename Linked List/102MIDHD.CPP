#include<iostream.h>
#include<conio.h>
#include<linklist.h>
#include<process.h>
void main()
{
	clrscr();
	ll l1;
	int in;
	cout<<"\nEnter the linked list ";
	l1.input();
	node *prev=l1.head,*mid=l1.head,*ptr=l1.head;
	while(ptr&&ptr->next)
	{
		prev=mid;
		mid=mid->next;
		ptr=ptr->next->next;
	}
	if(l1.head!=l1.tail)
	{
		prev->next=mid->next;
		mid->next=l1.head;
		l1.head=mid;
		if(mid==l1.tail)
		{
			l1.tail=mid->next;
		}
	}
	l1.print();
	getch();
}