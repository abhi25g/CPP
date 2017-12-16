#include<iostream.h>
#include<conio.h>
#include<linklist.h>
void main()
{
	clrscr();
	ll l1;
	node *prev=0,*ptr=0, *mid=0;
	l1.input();
	cout<<"\nThe linked list is ";
	l1.print();
	ptr=mid=l1.head;
	while(ptr&&ptr->next)
	{
		prev=mid;
		mid=mid->next;
		ptr=ptr->next->next;
	}
	cout<<"\nThe middle element is "<<mid->info<<"\n";
	prev->next=mid->next;
	if(mid==l1.tail)
		l1.tail=mid;
	delete mid;
	l1.print();
	getch();
}