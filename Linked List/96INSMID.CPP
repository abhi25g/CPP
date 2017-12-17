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
	cout<<"\nEnter the element ";
	cin>>in;
	node *prev=l1.head,*mid=l1.head,*ptr=l1.head;
	while(ptr&&ptr->next)
	{
		prev=mid;
		mid=mid->next;
		ptr=ptr->next->next;
	}
	if(!prev)
	{
		l1.ath(in);
	}
	else
	{
		prev->next=new node(in,prev->next);
		if(prev==l1.tail)
		{
			l1.tail=prev->next;
		}
	}
	l1.print();
	getch();
}