#include<iostream.h>
#include<conio.h>
#include<linklist.h>
#include<math.h>
void main()
{
	clrscr();
	ll l1,l2;
	node *ptr1=0, *ptr2=0;
	int counter=1,n=0,len1,len2;
	cout<<"\nEnter the first linked list ";
	l1.input();
	cout<<"\nEnter the second linked list ";
	l2.input();
	ptr1=l1.head;
	ptr2=l2.head;
	node *ptr=l1.head;
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
	l2.tail->next=ptr;
	l2.tail=l1.tail;
	len1=l1.length();
	len2=l2.length();
	n=abs(len1-len2);
	while(n&&len1>len2)
	{
		ptr1=ptr1->next;
		n--;
	}
	while(n&&len2>len1)
	{
		ptr2=ptr2->next;
		n--;
	}
	l1.print();
	l2.print();
	while(ptr1&&ptr2)
	{
		if(ptr1->next==ptr2->next)
		{
			cout<<"\nThe point of intersection is "<<ptr1->next->info;
			break;
		}
		ptr1=ptr1->next;
		ptr2=ptr2->next;
	}
	getch();
}