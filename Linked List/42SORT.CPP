#include<iostream.h>
#include<conio.h>
#include<linklist.h>
#include<process.h>
void main()
{
	clrscr();
	ll l1;
	node *ptr;
	int n0=0,n1=0,n2=0;
	cout<<"\nEnter the linked list ";
	l1.input();
	ptr=l1.head;
	while(ptr)
	{
		if(ptr->info==0)
			n0++;
		else if(ptr->info==1)
			n1++;
		else if(ptr->info==2)
			n2++;
		ptr=ptr->next;
	}
	cout<<"\nThe sorted list is ";
	ptr=l1.head;
	for(int i=0;i<n0;i++)
	{
		ptr->info=0;
		ptr=ptr->next;
	}
	for(i=0;i<n1;i++)
	{
		ptr->info=1;
		ptr=ptr->next;
	}
	for(i=0;i<n2;i++)
	{
		ptr->info=2;
		ptr=ptr->next;
	}
	l1.print();
	getch();
}