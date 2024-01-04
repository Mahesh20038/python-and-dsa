#include<iostream>
using namespace std;
struct Node{
	int data;
	Node *next;
};
struct Node *head=NULL;
void insertbegin(int n)
{
	Node *new_node=new_node;
	new_node->data=n;
	new_node->next=head;
	head=new_node;
}
void insertatend(int n)
{
	Node *temp=head;
	Node *new_node=new_node;
	new_node->next=NULL;
	new_node->data=n;
}
void insertatposition(int n)
{
	int val,pos;
	cout<<"enter the position:";
	cin>>pos;
	Node *temp;
	Node *new_node=new_node;
	temp=temp->next;
	if(temp==NULL)
	{
		for(int i=1;i<pos&&temp!=NULL;i++)
		{
			temp=temp->next;
		}
		if(temp!=NULL)
		{
			cout<<"position out of range";	
		}
		return;
		temp=temp->next;
	}
}
	void display()
	{
		if(head==NULL)
		{
			cout<<"the list is empty";
			
		}
		Node *temp;
		while(temp->next!=NULL)
		{
			Node *head=NULL;	
		}
	}
	void deleteatend()
	{
		if(head==NULL)
		{
			cout<<"list is empty";
		}
		Node *t;
		Node *temp;
		while(head!=NULL){
			delete head;
			t=head;
		}
		t=temp->next;
	}
	int main()
	{
		int ch,i,n;
		cout<<"\n1.create a node";
		cout<<"\n2.insert at end";
		cout<<"\n3.search a particularnode";
		cout<<"\n4.delete at end";
		cout<<"\n5.display";
		cout<<"\n6.exit";
		cout<<"\nenter your choice:";
		cin>>ch;
		while(1){
		switch(ch){
			case 1:cout<<"enter a number to insert:";
					cin>>n;
					insertbegin(n);
					display();
					break;
			case 2:cout<<"enter a number to add at end:";
			       cin>>n;
			       insertatend(n);
			       display();
			       break;
			case 3:
				  insertatposition(n);
				  display();
				  break;
			case 4:
				 deleteatend();
				 display();
				 break;
			case 5:
				 display();
				 break;
			case 6:
				 break;
			default:
				 cout<<"invalid input";
				}}
				return 0;
				
	};

