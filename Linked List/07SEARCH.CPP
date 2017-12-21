#include<iostream.h>
#include<conio.h>
#include<linklist.h>
void main()
{
	clrscr();
	ll l1;
	int n;
	node *ptr=0;
	l1.input();
	cout<<"\nEnter the element you want to search ";
	cin>>n;
	ptr=l1.head;
	while(ptr)
	{
		if(ptr->info==n)
		{
			cout<<"\nElement found";
			break;
		}
		ptr=ptr->next;
	}
	if(!ptr)
	{
		cout<<"\nElement not found";
	}
	getch();
}