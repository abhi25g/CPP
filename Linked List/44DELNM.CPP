#include<iostream.h>
#include<conio.h>
#include<linklist.h>
#include<process.h>
void main()
{
	clrscr();
	ll l1;
	node*ptr,*prev,*temp;
	int n,m;
	cout<<"\nEnter the linked list ";
	l1.input();
	cout<<"\nEnter m and n ";
	cin>>m>>n;
	l1.print();
	cout<<"\n";
	if(m+n>l1.length())
	{
		cout<<"\nNot enough elements";
		getch();
		exit(0);
	}
	ptr=l1.head;
	prev=0;
	for(int i=1;i<=m;i++)
	{
		prev=ptr;
		ptr=ptr->next;
	}
	temp=ptr;
	for(i=0;i<n;i++)
	{
		ptr=ptr->next;
		delete temp;
		temp=ptr;
	}
	if(prev)
		prev->next=ptr;
	else
		l1.head=ptr;
	if(!ptr)
		l1.tail=prev;
	l1.print();
	getch();
}