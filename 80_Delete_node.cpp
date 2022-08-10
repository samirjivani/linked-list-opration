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
		void deleteNode(int key) 
		{
			Node** head_ref;
		  struct Node *temp = *head_ref, *prev;
		
		  if (temp != NULL && temp->data == key) {
		  *head_ref = temp->next;
		  delete(temp);
		  return;
		  }
		  // Find the key to be deleted
		  while (temp != NULL && temp->data != key) {
		  prev = temp;
		  temp = temp->next;
		  }
		
		  // If the key is not present
		  if (temp == NULL) return;
		
		  // Remove the node
		  prev->next = temp->next;
		
		  delete(temp);
		}
		
				
};
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
	 cout << "\nAfter deleting an element: ";
  	l2.deleteNode(334);
  	l2.print();
	
	
	return 0;
}
