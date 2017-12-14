#include<iostream.h>
#include<conio.h>
#include<linklist.h>
void main()
{
	clrscr();
	ll l1;
	int x,n=0;
	node *ptr=0;
	l1.input();
	cout<<"\nThe linked list is ";
	l1.print();
	cout<<"\nEnter the number you want to find the occurences of ";
	cin>>x;
	ptr=l1.head;
	while(ptr)
	{
		if(ptr->info==x)
			n++;
		ptr=ptr->next;
	}
	cout<<"\nThe number of occurence of "<<x<<" are "<<n;
	getch();
}