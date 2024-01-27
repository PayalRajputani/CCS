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
    data=value;
    next=prev=NULL;
 }

};
Node * CreateDLL(int arr[], int index, int size, Node *back)
{
   if(index==size)
   return NULL;
   // node create
   Node *temp = new Node(arr[index]);
   temp->prev=back;
   temp->next=CreateDLL(arr,index+1,size,temp);
   return temp;

}
int main()
{
    Node *head=NULL;

    //create doubly linked list
    int arr[]={1,2,3,4,5};
    head= CreateDLL(arr,0,5,NULL);int pos=2;
   

    if(head!=NULL)
    {
        //if only one Node exist
        if(head->next==NULL)
        {
            delete head;
            head=NULL;
        }
        //if more than 1 node exist
        else
        {
        Node *temp=head;
        head=head->next;
        delete temp;
        head->prev=NULL;
        }
    }
    /*if(head!=NULL)
    {
        //if only one Node exist
        if(head->next==NULL)
        {
            delete head;
            head=NULL;
        }
        //if more than 1 node exist
        else
        {
            Node *curr=head;
            //last node leke jaao
            while(curr->next)
            curr=curr->next;

            curr->prev->next=NULL;
            delete curr;
        }
    } */   

    Node *trav = head;
    while (trav)
    {
      cout<<trav->data<<" ";
      trav= trav->next;
    }

}