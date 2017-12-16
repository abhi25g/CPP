#include<iostream.h>
#include<conio.h>
#include<linklist.h>
void main()
{
	clrscr();
	ll l1;
	int f;
	cout<<"\nEnter the linked list ";
	l1.input();
	node *ptr1=l1.head,*prev1=0,*ptr2=ptr1->next,*prev2=ptr1,*temp=0;
	while(ptr1) {
		cout<<"\nIteration for "<<ptr1->info<<"\n";
		prev2=ptr1;
		ptr2=ptr1->next;
		f=0;
		while(ptr2) {
			if(ptr2->info==ptr1->info) {
				prev2->next=ptr2->next;
				delete ptr2;
				f=1;
			}
			else {
				prev2=prev2->next;
			}
			ptr2=prev2->next;
		}
		temp=ptr1->next;
		if(f) {
			if(!prev1) {
				l1.head=ptr1->next;
			}
			else
				prev1->next=ptr1->next;
			delete ptr1;
		}
		else
			prev1=ptr1;
		if(!prev1)
			ptr1=temp;
		else
			ptr1=prev1->next;
		l1.print();
	}
	l1.tail=prev1;
	l1.tail->next=0;
	l1.print();
	getch();
}