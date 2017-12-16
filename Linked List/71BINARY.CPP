#include<iostream.h>
#include<conio.h>
#include<linklist.h>
#include<process.h>
void main()
{
	clrscr();
	ll l1;
	int n=0;
	cout<<"\nEnter the linked list ";
	l1.input();
	node *ptr=l1.head;
	if(ptr->info==1)
		n=2;
	ptr=ptr->next;
	while(ptr)
	{
		if(ptr->info==1&&!ptr->next)
		{
			n+=1;
			break;
		}
		n*=2;
		if(ptr->info==1&&ptr->next)
			n+=2;
		ptr=ptr->next;
	}
	cout<<"\nThe decimal equivalent is "<<n;
	getch();
}