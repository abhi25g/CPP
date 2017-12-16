#include<iostream.h>
#include<conio.h>
#include<linklist.h>
void main()
{
	clrscr();
	ll l1;
	cout<<"\nEnter the linked list ";
	l1.input();
	node *ptr=l1.head,*prev=0,*temp;
	while(ptr)
	{
		prev=ptr;
		temp=ptr->next;
		while(prev)
		{
			if(temp->info==ptr->info)
			{
				prev->next=temp->next;
				delete temp;
			}
			prev=prev->next;
			temp=prev->next;
		}
		ptr=ptr->next;
	}
	l1.tail=prev;
	l1.tail->next=0;
	l1.print();
	getch();
}