#include<iostream>
using namespace std;


class Node
{
    public:
int data ;
Node *next;
Node(int data )
{
this ->data =data;
this->next=NULL;




}
~Node ()
{


    int value=this->data;
    if(this->next!=NULL)
    {
        delete next;
        next=NULL;
        
    }


}
};





void insertAtHead(Node* &head, int data)
{
Node*temp=new Node(data);
temp->next=head;
head=temp;






}
void insertAtTail(Node* &tail, int data)
{
    Node *temp=new Node(data);

tail->next=temp;
tail=temp;





}
void print (Node *head)
{
while(head !=NULL)
{
    cout<<head->data << " ";

head=head->next;
}
cout<<endl;

}

void insertatposition(Node *&tail,Node *&head, int position , int data )
{
   if(position==1)
   {
    insertAtHead(head,data);
    return ;

   }
int cnt=1;
Node *temp=head;
while(cnt<position-1)
{
    temp=temp->next;
    cnt++;

}
while(temp->next==NULL)
{
insertAtTail(tail,data);
return ;

}





Node *nodetoinsert=new Node(data) ;
nodetoinsert->next=temp->next;
temp->next=nodetoinsert;













}


void deletenode(int position,Node * &head)
{
if(position==1)
{
    Node *temp=head;

head=head->next;
temp->next=NULL;

delete  temp;




}
else
{


    Node *pre=NULL;
    Node *curr=head;
    int cnt=1;
    while(cnt<position)
    {
        pre=curr;
        curr=curr->next;
        cnt++;

    }
    pre->next=curr->next;
    curr->next=NULL;

    delete curr;


}




}






int main()
{
 

    Node *newnode=new Node(10);
       Node *head =newnode;
   Node  *tail=newnode;

   insertAtTail(tail,56);

     
   insertatposition(tail,head,1,22);
     print (head);



  deletenode(2,head);


 print (head);




}