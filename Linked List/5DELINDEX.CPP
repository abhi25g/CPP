#include<iostream.h>
#include<conio.h>
#include<linklist.h>
#include<process.h>
void main()
{
	clrscr();
	ll l1;
	int a,counter=1;
	node *ptr=0, *prev=0;
	l1.input();
	cout<<"\nThe linked list is ";
	l1.print();
	cout<<"\nEnter the node number you want to delete ";
	cin>>a;
	int l=l1.length();
	if(a>l1.length())
	{
		cout<<"\nThe list if not this long";
		getch();
		exit(0);
	}
	ptr=l1.head;
	while(ptr)
	{
		if(counter==a)
		{
			if(ptr==l1.head&&ptr==l1.tail)
			{
				delete l1.head;
				l1.head=l1.tail=0;
			}
			else if(ptr==l1.head)
			{
				l1.head=l1.head->next;
				delete ptr;
			}
			else if(ptr==l1.tail)
			{
				l1.tail=prev;
				delete ptr;
			}
			else
			{
				prev->next=ptr->next;
				delete ptr;
			}
			ptr=0;
		}
		else
		{
			prev=ptr;
			ptr=ptr->next;
			counter++;
		}
	}
	l1.print();
	getch();
}