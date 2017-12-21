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
	ll li,lu;
	node *ptr1=0, *ptr2=0;
	cout<<"\nEnter the first linked list ";
	l1.input();
	cout<<"\nEnter the second linked list ";
	l2.input();
	l1.head=ms(l1.head);
	cout<<"\nThe first linked list is ";
	l1.print();
	l2.head=ms(l2.head);
	cout<<"\nThe second linked list is ";
	l2.print();
	ptr1=l1.head;
	ptr2=l2.head;

	while(ptr1&&ptr2)
	{
		if(ptr1->info==ptr2->info)
		{
			li.att(ptr1->info);
			while(ptr1->info==ptr1->next->info)
			{
				ptr1=ptr1->next;
			}
			ptr1=ptr1->next;
			while(ptr2->info==ptr2->next->info)
			{
				ptr2=ptr2->next;
			}
			ptr2=ptr2->next;
		}
		else if(ptr1->info<ptr2->info)
		{
			ptr1=ptr1->next;
		}
		else
		{
			ptr2=ptr2->next;
		}
	}
	ptr1=l1.head;
	ptr2=l2.head;
	while(ptr1&&ptr2)
	{
		if(ptr1->info==ptr2->info)
		{
			lu.att(ptr1->info);
			while(ptr1->info==ptr1->next->info)
			{
				ptr1=ptr1->next;
			}
			ptr1=ptr1->next;
			while(ptr2->info==ptr2->next->info)
			{
				ptr2=ptr2->next;
			}
			ptr2=ptr2->next;
		}
		else if(ptr1->info<ptr2->info)
		{
			lu.att(ptr1->info);
			while(ptr1->info==ptr1->next->info)
			{
				ptr1=ptr1->next;
			}
			ptr1=ptr1->next;
		}
		else
		{
			lu.att(ptr2->info);
			while(ptr2->info==ptr2->next->info)
			{
				ptr2=ptr2->next;
			}
			ptr2=ptr2->next;
		}
	}
	cout<<"\nThe intersection of the two lists is ";
	li.print();
	cout<<"\nThe union of the two lists is ";
	lu.print();
	getch();
}