#include<iostream.h>
#include<conio.h>
#include<linklist.h>
#include<process.h>
void main()
{
	clrscr();
	int key;
	ll l1,l2;
	node *ptr=0,*temp=0,*prev=0;
	cout<<"\nEnter the linked list ";
	l1.input();
	ptr=l1.head->next;
	l2.head=l2.tail=l1.head;
	l1.head=l1.head->next;
	l2.tail->next=0;
	while(ptr)
	{
		temp=l2.head;
		prev=0;
		l1.head=l1.head->next;
		while(temp&&temp->info<ptr->info)
		{
			prev=temp;
			temp=temp->next;
		}
		if(prev)
		{
			prev->next=ptr;
			ptr->next=temp;
			if(!temp)
				l2.tail=ptr;
		}
		else
		{
			ptr->next=temp;
			l2.head=ptr;
		}
		ptr=l1.head;
	}
	l1=l2;
	cout<<"\nThe sorted list is ";
	l1.print();
	getch();
}