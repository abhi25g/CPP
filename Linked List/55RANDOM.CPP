#include<iostream.h>
#include<conio.h>
#include<linklist.h>
#include<stdlib.h>
void main()
{
	clrscr();
	ll l1;
	cout<<"\nEnter the linked list ";
	l1.input();
	node *ptr=0;
	int l=l1.length();
	randomize();
	int n=random(l)+1;
	ptr=l1.head;
	for(int i=2;i<=n;i++)
	{
		ptr=ptr->next;
	}
	cout<<"\nThe number selected at random is "<<ptr->info;
	getch();
}