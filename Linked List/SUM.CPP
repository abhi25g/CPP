#include<iostream.h>
#include<conio.h>
#include<linklist.h>
void main()
{
	clrscr();
	ll l1,l2;
	int n1=0,n2=0,s=0;
	node*ptr1,*ptr2;
	cout<<"\nEnter the 1st linked list ";
	l1.input();
	cout<<"\nEnter the 2nd linked list ";
	l2.input();
	ptr1=l1.head;
	ptr2=l2.head;
	while(ptr1)
	{
		n1=n1*10+ptr1->info;
		ptr1=ptr1->next;
	}
	while(ptr2)
	{
		n2=n2*10+ptr2->info;
		ptr2=ptr2->next;
	}
	s=n1+n2;
	cout<<"\nThe sum is "<<s;
	getch();
}