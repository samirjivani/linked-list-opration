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
		count();
				
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
LinkedList::count()
{
	int t = 0;
	Node *temp = head;
	while(temp!=NULL)
	{
		cout<<temp->data<<"--";
		temp=temp->next;
		t++;
	}
	cout<<endl<<"number of node=="<<t;
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
	l1.count();
	cout<<endl;
	l2.insert(334);
	l2.insert(556);
	l2.insert(341);
	l2.insert(34);
	l2.insert(342);
	l2.count();
	
	
	
	return 0;
}
