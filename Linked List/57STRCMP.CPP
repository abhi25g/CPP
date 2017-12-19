#include<iostream.h>
#include<conio.h>
#include<charlist.h>
void main()
{
	clrscr();
	node *ptr1=0,*ptr2=0;
	int r=0;
	ll l1;
	cout<<"\nEnter the 1st linked list in sorted order ";
	l1.input();
	ll l2;
	cout<<"\nEnter the 2nd linked list in sorted order ";
	l2.input();
	ptr1=l1.head;
	ptr2=l2.head;
	while(ptr1&&ptr2)
	{
		if(ptr1->info<ptr2->info)
		{
			r=-1;
			break;
		}
		if(ptr1->info>ptr2->info)
		{
			r=1;
			break;
		}
		ptr1=ptr1->next;
		ptr2=ptr2->next;
	}
	if(ptr1)
	{
		r=1;
	}
	else if(ptr2)
	{
		r=-1;
	}
	cout<<"\nThe result is "<<r;
	getch();
}