#include<iostream.h>
#include<conio.h>
#include<linklist.h>
void main()
{
	clrscr();
	ll l1;
	int n1=0,s=0;
	node*ptr1;
	cout<<"\nEnter the linked list ";
	l1.input();
	ptr1=l1.head;
	while(ptr1)
	{
		n1=n1*10+ptr1->info;
		ptr1=ptr1->next;
	}
	s=n1+1;
	cout<<"\nThe successor of the number is "<<s;
	getch();
}