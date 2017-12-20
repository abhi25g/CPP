#include<iostream.h>
#include<conio.h>
#include<linklist.h>
#include<process.h>
void main()
{
	clrscr();
	ll l1;
	int a,counter=1;
	l1.input();
	node *ptr=0,*ptr1=l1.head, *ptr2=l1.head;
	ptr=l1.head;
	while(ptr)
	{
		if(counter==3)
		{
			break;
		}
		else
		{
			ptr=ptr->next;
			counter++;
		}
	}
	l1.tail->next=ptr;
	ptr=l1.head;
	while(ptr!=l1.tail)
	{
		cout<<ptr->info<<"->";
		ptr=ptr->next;
	}
	cout<<ptr->info<<"->";
	ptr=ptr->next;
	cout<<ptr->info;
	cout<<endl;
	while(ptr1&&ptr2&&ptr2->next)
	{
		ptr1=ptr1->next;
		ptr2=ptr2->next->next;
		if(ptr1==ptr2)
			break;
	}
	cout<<"\nLoop node : "<<ptr1->info<<" ";
	ptr2=l1.head;
	while(ptr1->next!=ptr2->next)
	{
		ptr1=ptr1->next;
		ptr2=ptr2->next;
	}
	ptr1->next=0;
	l1.tail=ptr1;
	l1.print();
	getch();
}