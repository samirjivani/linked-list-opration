/*linklist opration */
#include<iostream>
using namespace std;
class Node
{
	public:
		int data;
		Node *next;
		Node();
		Node(int i);
};
Node:: Node()
{
	data = 0;
	next = NULL;
}
Node:: Node(int i)
{
	data=i;
	next = NULL;
}
//node is createdm.

class LinkedList
{
	public:
		Node *head;
		LinkedList();
		void insert(int j);
		print();
		LinkedList* marg(LinkedList l2);
		
		
	
};
LinkedList :: LinkedList()
{
	head = NULL;
	
}
void LinkedList :: insert(int j)
{
	Node *temp = new Node(j);
	if(head == NULL)
	{
		head = temp;
	}
	else
	{
		Node *first = head;
		while(first->next!=NULL)
		{
			first = first->next;
		}
		first->next = temp;
	}
}
LinkedList* LinkedList::marg(LinkedList l2)
	{
		Node *temp = this->head;
		
		Node *first = head;
			
			while(temp->next!=NULL)
			{
				temp = temp->next;
			}
			temp->next=l2.head;
			l2.head=NULL;
		return this;
	}
	

LinkedList :: print()
{
	if(head == NULL)
	{
		cout<<endl<<"linked list is empty";
	}
	else
	{
		Node *first = head ;
		while(first!=NULL)
		{
			cout<<first->data<<"--";
			first=first->next;
		}
	}
}
int main()
{
	LinkedList l1;
	l1.insert(10);
	l1.insert(20);
	l1.insert(30);
	l1.insert(40);
	l1.insert(50);
	cout<<endl<<"l1 is:: ";
	l1.print();
	
	LinkedList l2;
	l2.insert(60);
	l2.insert(70);
	l2.insert(80);
	l2.insert(90);
	l2.insert(100);
	cout<<endl<<"l2 is:: ";
	l2.print();
	cout<<endl<<"l1+l2";

	LinkedList*l3 = l1.marg(l2);
	l3->print();//doubt
	
	return 0;
}
