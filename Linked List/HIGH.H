#include<iostream.h>
#include<conio.h>
class node
{
	public:
	int info;
	node *high,*next;
	node(int el,node*ptr=0,node*h=0)
	{
		info=el;
		high=0;
		next=ptr;
	}
	friend class ll;
};
class ll
{
	public:
	node *head, *tail;
	ll()
	{
		head=tail=0;
	}
	void ath(int el)
	{
		head=new node(el,head);
		if(tail==0)
			tail=head;
	}
	void att(int el)
	{
		if(!head)
			head=tail=new node(el);
		else
		{
			tail->next=new node(el);
			tail=tail->next;
		}
	}
	void dfh()
	{
		if(head==tail&&head)
		{
			delete(head);
			head=tail=0;
		}
		else
		{
			node *ptr=head;
			head=head->next;
			delete(ptr);
		}
	}
	void dft();
	int length();
	void input();
	void print();
};
void ll::dft()
{
	if(head==tail&&head)
	{
		delete(head);
		head=tail=0;
	}
	else
	{
		node *ptr=head;
		while(ptr->next!=tail)
			ptr=ptr->next;
		ptr->next=0;
		delete tail;
		tail=ptr;
	}
}
int ll::length()
{
	int l=0;
	node *ptr=head;
	while(ptr)
	{
		l++;
		ptr=ptr->next;
	}
}
void ll::input()
{
	char ans='y';
	int i;
	while(ans=='y')
	{
		cout<<"\nEnter the element ";
		cin>>i;
		att(i);
		cout<<"\nDo you want to enter more? ";
		cin>>ans;
	}
}
void ll::print()
{
	node *ptr=head;
	while(ptr->next)
	{
		cout<<ptr->info<<" "<<ptr->high->info<<"->";
		ptr=ptr->next;
	}
	cout<<ptr->info;
	cout<<endl;
}