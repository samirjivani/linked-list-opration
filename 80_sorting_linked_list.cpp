#include<iostream>
using namespace std;
class Node
{
	public:
	int data ;
	Node *next;
	Node();
	Node(int i);
	
};
class LinkedList
{
	public:
		Node *head;
		LinkedList();
		//void insert(Node *newnode);
		void insert(int k);
		print();
		void sort();		
};
LinkedList :: LinkedList()
{
	head = NULL;
}
void LinkedList :: insert(int k)
{
	Node *newnode = new Node(k);
	if(head==NULL)
	{
		head=newnode;
	}
	else
	{
		Node *temp = head;
		while(temp->next!=NULL)	
		{
			temp = temp->next;
		}
		temp->next = newnode;
	}
	
 } 
LinkedList::print()
{
	Node *temp = head;
	while(temp!=NULL)
	{
		cout<<temp->data<<"--";
		temp=temp->next;
	}
}
void LinkedList :: sort()
{
	Node *temp = head;
	Node *first = NULL;
	while(temp->next!=NULL)
	{
		first = temp->next;
		while(first!=NULL)
		{
			if(temp->data>first->data)
			{
				int t;
				t = temp->data;
				temp->data=first->data;
				first->data= t;
			}
			first = first->next;	
		}
		temp = temp->next;
		
	}
}
Node :: Node()
{
	data =0;
	next = NULL;
	
}
Node :: Node(int i)
{
	data = i;
	next = NULL;
}

int main()
{
	LinkedList l1;
	LinkedList l2;
	l1.insert(32);
	l1.insert(323);
	l1.insert(31);
	l1.insert(45);
	l1.print();
	cout<<endl;
	l2.insert(334);
	l2.insert(556);
	l2.insert(341);
	l2.insert(34);
	l2.insert(342);
	l2.print();
	
	cout<<endl<<"after sorting";
	cout<<endl;
	l1.sort();
	l1.print();
	cout<<endl;
	l2.sort();
	l2.print();	
	
	return 0;
}
