#include<iostream.h>
#include<conio.h>
#include<polylist.h>
void main()
{
	clrscr();
	node *ptr1=0,*ptr2=0,*ptr=0;
	ll l3;
	ll l1;
	cout<<"\nEnter the 1st polynomial ";
	l1.input();
	ll l2;
	cout<<"\nEnter the 2nd polynomial ";
	l2.input();
	ptr1=l1.head;
	ptr2=l2.head;
	if(ptr1->pwr>ptr2->pwr)
	{
		ptr=ptr1;
		ptr1=ptr1->next;
	}
	else if(ptr1->pwr<ptr2->pwr)
	{
		ptr=ptr2;
		ptr2=ptr2->next;
	}
	else
	{
		ptr=new node(ptr1->coeff+ptr2->coeff,ptr1->pwr);
		ptr1=ptr1->next;
		ptr2=ptr2->next;
	}
	l3.head=ptr;
	while(ptr1&&ptr2)
	{
		if(ptr1->pwr>ptr2->pwr)
		{
			ptr->next=ptr1;
			ptr1=ptr1->next;
		}
		else if(ptr1->pwr<ptr2->pwr)
		{
			ptr->next=ptr2;
			ptr2=ptr2->next;
		}
		else
		{
			ptr->next=new node(ptr1->coeff+ptr2->coeff,ptr1->pwr);
			ptr1=ptr1->next;
			ptr2=ptr2->next;
		}
		ptr=ptr->next;
	}
	if(ptr1)
	{
		ptr->next=ptr1;
		l3.tail=l1.tail;
	}
	else if(ptr2)
	{
		ptr->next=ptr2;
		l3.tail=l2.tail;
	}
	else
	{
		l3.tail=ptr;
		ptr->next=0;
	}
	cout<<"\nThe added polynomial is ";
	l3.print();
	getch();
}