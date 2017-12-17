#include<iostream.h>
#include<conio.h>
#include<linklist.h>
void main()
{
	clrscr();
	ll l1;
	int n=0;
	node *ptr=0;
	l1.input();
	cout<<"\nThe linked list is ";
	l1.print();
	ptr=l1.head;
	while(ptr->next&&(ptr->info>ptr->next->info))
	{
		n++;
		ptr=ptr->next;
	}
	cout<<"\nThe rotation count is "<<n;
	getch();
}