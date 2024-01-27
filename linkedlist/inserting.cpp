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
int main()
{
    Node *Head;
    Head=NULL;
   //Head=new Node(4);cout<<Head->data<<endl;
   //cout<<Head->next<<endl;

    int arr[]={2,5,8,9,10};
  // insert the node at begining

  //linked list doesn't exit
  for(int i=0; i<5; i++)
  {
   if(Head==NULL)
   {
    Head=new Node(arr[i]);
   }
  //linked list exit 
   else
   {
    Node *temp;
    temp=new Node(arr[i]);
    temp->next=Head;
    Head=temp;
   }
}
Node *temp=Head;
while(temp!=NULL)
{
 cout<<temp->data<<" ";
 temp=temp->next;
}
};