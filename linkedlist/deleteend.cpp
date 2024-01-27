#include<iostream>
using namespace std;

class Node
{   
    public:
    int data;
    Node *next;
    Node(int value)
    {
      data=value;
      next=NULL;
    }
};
Node* CreateLinkedlist(int arr[], int index, int size)
{
    //base case
    if(index==size)
    return NULL;

    Node *temp;
    temp = new Node(arr[index]);
    temp->next= CreateLinkedlist(arr,index+1,size);
    return temp;

}
int main ()
{
  Node *Head;

  Head = NULL;
  int arr[]={2,4,6,8,10};

  Head = CreateLinkedlist(arr,0,5);

  
  //delete a node at end
   if(Head!=NULL)
  {
    //only one node is present
    if(Head->next==NULL)
   {
        Node *temp=Head;
        Head=Head->next;
       delete temp;
    }
  //more than one node is present 
  else
  {
    Node *curr = Head;
    Node *prev = NULL;
     //curr->next is not Nul
     while (curr->next!=NULL)
   {
        prev = curr;
        curr= curr->next;
    }
     prev->next=curr->next;
     delete curr;
  }
  
 }
  //print value

   Node *temp;
   temp = Head;
   while(temp)
   {
      cout<<temp->data<<" ";
      temp= temp->next;
    }


} 