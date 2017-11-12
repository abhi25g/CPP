#include<iostream.h>
#include<conio.h>
#include<linklist.h>
void main()
{
	clrscr();
	ll l1;
	node *ptr=0;
	l1.input();
	cout<<"\nThe linked list is ";
	l1.print();
	while(l1.head)
	{
		l1.dfh();
		cout<<"\nCurrent List : ";
		l1.print();
	}
	cout<<"\nThe final list is : ";
	l1.print();
	getch();
}