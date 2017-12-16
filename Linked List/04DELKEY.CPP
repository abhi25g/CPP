#include<iostream.h>
#include<conio.h>
#include<linklist.h>
void main()
{
	clrscr();
	ll l1;
	int a;
	node *ptr = 0, *prev = 0;
	l1.input();
	cout << "\nThe linked list is ";
	l1.print();
	cout << "\nEnter the element you want to delete ";
	cin >> a;
	ptr = l1.head;
	while (ptr) {
		if (ptr->info==a) {
			
			if ((ptr == l1.head) && (ptr == l1.tail)) {
				delete l1.head;
				l1.head=l1.tail=0;
			}
			else if (ptr ==l1.head) {
				l1.head = l1.head->next;
				delete ptr;
			}
			else if (ptr == l1.tail) {
				l1.tail = prev;
				delete ptr;
			}
			else {
				prev->next = ptr->next;
				delete ptr;
			}
		}
		else {
			prev = ptr;
			ptr = ptr->next;
		}
	}
	
	l1.print();
	getch();
}
