#include<iostream.h>
#include<conio.h>
#include<linklist.h>
#include<process.h>
void main()
{
	clrscr();
	ll l1;
	int n,k=1,in;
	node *ptr=0;
	cout<<"\nEnter the linked list ";
	l1.input();
	cout<<"\nEnter the value of n ";
	cin>>n;
	cout<<"\nEnter the element ";
	cin>>in;
	ptr=l1.head;
	if(n==0)
	{
		l1.ath(in);
	}
	else if(n==l1.length())
	{
		l1.att(in);
	}
	else
	{
		for(;k<n;k++)
		{
			ptr=ptr->next;
		}
		ptr->next=new node(in,ptr->next);
	}
	l1.print();
	getch();
}