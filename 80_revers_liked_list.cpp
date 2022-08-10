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
		rev();
		
		
	
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
LinkedList :: rev()
{
	Node *curr = head;
	Node *samp = NULL;
	Node *prv = NULL;
	while(curr!=NULL)
	{
		samp = curr->next;
		curr->next = prv;
		prv=curr;
		curr=samp;
	}
	head=prv;
	
	
	
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
	l1.print();
	l1.rev();
	l1.print();
	return 0;
}
