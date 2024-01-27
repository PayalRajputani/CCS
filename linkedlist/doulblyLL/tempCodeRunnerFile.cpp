Node *head=NULL;
    // insert  at start
    //linked list does't exist
    if(head==NULL)
    {
        head= new Node(5);
    }
    //already exist
    else{
        Node *temp=new Node(5);
        temp->next = head;
        head->prev = temp;
         head=temp;