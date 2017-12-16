#include<iostream.h>
#include<conio.h>
#include<linklist.h>
#include<process.h>
void main()
{
	clrscr();
	ll l1;
	node *prev = 0, *ptr = 0, *last = 0;
	cout<<"\nEnter the linked list ";
	l1.input();
	ptr=l1.head;
	last=l1.tail;
	while(ptr!=l1.tail->next) {
		if(ptr->info%2!=0) {
			last->next=ptr;
			last=last->next;
			if(prev) {
				prev->next = ptr->next;
			}
			else {
				l1.head = ptr->next;
			}
		}
		else {
			prev = ptr;
		}
		ptr = ptr->next;
	}
	l1.tail = last;
	l1.tail->next = 0;
	l1.print();
	getch();
}