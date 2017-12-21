#include<iostream.h>
#include<conio.h>
#include<linklist.h>
node* reverse(node *head)
{
	node*ptr=head->next, *prev=head, *temp=ptr->next, *tail=head;
	while(tail->next)
		tail=tail->next;
	while(ptr)
	{
		ptr->next=prev;
		prev=ptr;
		ptr=temp;
		temp=temp->next;
	}
	temp=head;
	head=tail;
	tail=temp;
	tail->next=0;
	return head;
}
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
	int n,count=0;
	node *tail=0,*ptr1=0,*ptr2=0;
	cout<<"\nEnter the first linked list ";
	l1.input();
	l1.head=ms(l1.head);
	cout<<"\nEnter the second linked list ";
	l2.input();
	l2.head=ms(l2.head);
	l1.head=reverse(l1.head);
	tail=l1.head;
	while(tail->next)
		tail=tail->next;
	l1.tail=tail;
	cout<<"\nEnter the number ";
	cin>>n;
	ptr1=l1.head;
	ptr2=l2.head;
	while(ptr1&&ptr2)
	{
		if(ptr1->info>n)
		{
			ptr1=ptr1->next;
		}
		else if(ptr1->info+ptr2->info==n)
		{
			count++;
			ptr1=ptr1->next;
			ptr2=ptr2->next;
		}
		else if(ptr1->info+ptr2->info>n)
		{
			ptr1=ptr1->next;
		}
		else
		{
			ptr2=ptr2->next;
		}
	}
	cout<<"\nThe number of pairs with sum equal to "<<n<<" are "<<count;
	getch();
}