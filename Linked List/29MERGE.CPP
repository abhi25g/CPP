#include<iostream.h>
#include<conio.h>
#include<linklist.h>
node* middle(node *head)
{
	node *mid=head,*ptr=head;

	if(!ptr->next->next)
		return mid;
	while(ptr&&ptr->next)
	{
		mid=mid->next;
		ptr=ptr->next->next;
	}
	return mid;
}
node* merge(node *ptr1,node*ptr2)
{
	node *ptr,*temp;
	if(ptr1->info<ptr2->info)
	{
		temp=ptr=ptr1;
		ptr1=ptr1->next;
	}
	else
	{
		temp=ptr=ptr2;
		ptr2=ptr2->next;
	}
	while(ptr1&&ptr2)
	{
		if(ptr1->info<ptr2->info)
		{
			ptr->next=ptr1;
			ptr1=ptr1->next;
		}
		else
		{
			ptr->next=ptr2;
			ptr2=ptr2->next;
		}
		ptr=ptr->next;
	}
	if(ptr1)
	{
		ptr->next=ptr1;
	}
	if(ptr2)
	{
		ptr->next=ptr2;
	}
	return temp;
}
node* ms(node*ptr1)
{
	if(!ptr1||!ptr1->next)
	{
		return ptr1;
	}
	node *mid=middle(ptr1);
	node *midnxt=mid->next;
	mid->next=0;
	return(merge(ms(ptr1),ms(midnxt)));
}
void main()
{
	clrscr();
	ll l1;
	cout<<"\nEnter the linked list ";
	l1.input();
	l1.head=ms(l1.head);
	cout<<"\nThe sorted list is ";
	l1.print();
	getch();
}