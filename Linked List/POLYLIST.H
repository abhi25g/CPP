#include<iostream.h>
#include<conio.h>
class node
{
	public:
	int coeff;
	int pwr;
	node* next;
	node(int c,int p,node*ptr=0)
	{
		coeff=c;
		pwr=p;
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
	void ath(int c,int p)
	{
		head=new node(c,p,head);
		if(tail==0)
			tail=head;
	}
	void att(int c,int p)
	{
		if(!head)
			head=tail=new node(c,p);
		else
		{
			tail->next=new node(c,p);
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
	int c;
	int p;
	while(ans=='y')
	{
		cout<<"\nEnter the coefficient ";
		cin>>c;
		cout<<"\nEnter the power ";
		cin>>p;
		att(c,p);
		cout<<"\nDo you want to enter more? ";
		cin>>ans;
	}
}
void ll::print()
{
	node *ptr=head;
	while(ptr)
	{
		cout<<ptr->coeff<<"x^"<<ptr->pwr;
		if(ptr!=tail)
			cout<<" + ";
		ptr=ptr->next;
	}
	cout<<endl;
}