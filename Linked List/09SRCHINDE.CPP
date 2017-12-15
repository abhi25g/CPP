#include<iostream.h>
#include<conio.h>
#include<linklist.h>
#include<process.h>
void main()
{
	clrscr();
	ll l1;
	int a,counter=1;
	node *ptr=0;
	l1.input();
	cout<<"\nThe linked list is ";
	l1.print();
	cout<<"\nEnter the node number you want to search ";
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
			cout<<"\nElement at "<<a<<"th node is "<<ptr->info;
			break;
		}
		else
		{
			ptr=ptr->next;
			counter++;
		}
	}
	getch();
}