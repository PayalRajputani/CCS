#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;
    Node *prev;

    Node(int value)
    {
        data =value;
        next=prev=NULL;
    }
};
int main()
{
    Node *head=NULL,*tail=NULL;

    int arr[5]={1,2,3,4,5};

    for(int i=0; i<5; i++)
    {
        if(head==NULL)
        {
         head=new Node(arr[i]);
         tail=head;
        }
        else
        {
            Node *temp=new Node(arr[i]);
            tail->next=temp;
            temp->prev=tail;
            tail=temp;
        }
    }
    
    /*if(head==NULL)
    {
        head=new Node(5);
    }
    Node *curr=head;
    while(curr->next!=NULL)
    {
        curr=curr->next;
    }
    Node *temp=new Node(5);
    curr->next=temp;
    temp->prev=curr;*/
    Node *trav = head;

    while(trav)
    {
        cout<<trav->data<<" ";
        trav=trav->next;
    }

}