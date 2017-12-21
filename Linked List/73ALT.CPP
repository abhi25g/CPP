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
	ll l1,l2;
	node *ptr=0, *mid=0;
	l1.input();
	cout<<"\nThe linked list is ";
	l1.print();
	l1.head=ms(l1.head);
	ptr=l1.head;
	while(ptr->next)
		ptr=ptr->next;
	l1.tail=ptr;
	mid=middle(l1.head);
	l2.head=mid->next;
	l2.tail=l1.tail;
	l1.tail=mid;
	l1.tail->next=0;
	ptr=l2.head->next;
	node *prev=l2.head, *temp=ptr->next;
	while(ptr)
	{
		ptr->next=prev;
		prev=ptr;
		ptr=temp;
		temp=temp->next;
	}
	temp=l2.head;
	l2.head=l2.tail;
	l2.tail=temp;
	l2.tail->next=0;

	node *ptr1=l1.head->next,*ptr2=l2.head,*ptr3=l1.head;
	while(ptr1&&ptr2)
	{
		ptr3->next=ptr2;
		ptr2=ptr2->next;
		ptr3=ptr3->next;
		ptr3->next=ptr1;
		ptr1=ptr1->next;
		ptr3=ptr3->next;
	}
	if(ptr1)
	{
		ptr3->next=ptr1;
		l1.tail=l1.tail;
	}
	if(ptr2)
	{
		ptr3->next=ptr2;
		l1.tail=l2.tail;
	}
	cout<<"\nThe list is ";
	l1.print();
	getch();
}