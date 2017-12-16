#include<iostream.h>
#include<conio.h>
#include<linklist.h>
#include<process.h>
void main()
{
	clrscr();
	ll l1;
	int n;
	node*ptr=0;
	cout<<"\nEnter the linked list ";
	l1.input();
	cout<<"\nEnter the number by which you want to rotate ";
	cin>>n;
	n=n%l1.length();
	if(n!=0)
	{
		l1.tail->next=l1.head;
		ptr=l1.head;
		for(int i=1;i<n;i++)
		{
			ptr=ptr->next;
		}
		l1.head=ptr->next;
		ptr->next=0;
		l1.tail=ptr;
	}
	l1.print();
	getch();
}