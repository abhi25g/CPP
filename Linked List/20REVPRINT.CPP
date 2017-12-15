#include<iostream.h>
#include<conio.h>
#include<linklist.h>
void revprint(node *ptr)
{
	if(!ptr)
		return;
	revprint(ptr->next);
	cout<<ptr->info<<"->";
}
void main()
{
	clrscr();
	ll l1;
	cout<<"\nEnter the linked list ";
	l1.input();
	cout<<"\nThe reverse list is ";
	revprint(l1.head);
	getch();
}