#include<iostream.h>
#include<conio.h>
#include<linklist.h>
#include<process.h>
void main()
{
	clrscr();
	ll l1;
	int k=0,n=1;
	node *prev=0, *ptr=0;
	cout<<"\nEnter the linked list ";
	l1.input();
	cout<<"\nEnter the value of k ";
	cin>>k;
	ptr=l1.head;
	while(ptr)
	{
		if(n%k==0)
		{
			if(prev)
			{
				prev->next=ptr->next;
			}
			else
			{
				l1.head=ptr->next;
			}
			delete ptr;
			if(prev)
			{
				ptr=prev->next;
			}
			else
			{
				ptr=l1.head;
			}
		}
		else
		{
			prev=ptr;
			ptr=prev->next;
		}
		n++;
	}
	if(n%k==0)
	{
		l1.tail=prev;
	}
	l1.print();
	getch();
}