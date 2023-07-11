#include<iostream>
using namespace std;








class Node 
{
    public:
    int data ;
    Node *pre;
    Node *next;
    Node (int data )
    {
this->data =data ;
this->pre=NULL;
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

void del (int position, Node *head)
{


if(position==1)
{
   
      Node *temp=head;
temp->next->pre=NULL;
head=temp->next;
temp->next=NULL;
delete temp;







}
else{
    



    Node *pre=NULL;
    Node * curr=head;
    int cnt=1;
    while(cnt<position)
    {

        pre=curr;
        curr=curr->next;
        cnt++;

    }
    curr->pre=NULL;
    pre->next=curr->next;
    curr->next=NULL;
    delete curr;

}






}
void print(Node *head) {
   

while(head!=NULL)
{

    cout<<head->data<<" ";
  


    head=head->next;

}







}

 void insertingAtHead(int data ,Node * &head)
{

Node *temp=new Node(data);
temp->next=head;
head->pre=temp;
head=temp;



}
void insertingAtTail(int data, Node *&tail, Node *& head)
{


Node *temp=new Node (data);
tail->next=temp;
temp->pre=tail;
tail=temp;





}
void insertingAtPosition (int position , int data,Node *&head,Node * &Tail)
{
    if(position==1)
    {
        insertingAtHead(data,head);
        return ;


    }
int cnt=1;
Node *temp=head;



while(cnt<position-1)
{
    temp=temp->next;
    cnt++;

}
if(temp->next==NULL)
{
    insertingAtTail(data,Tail,head);
    return ;


}
Node *newnode1=new Node(data);
newnode1->next=temp->next;
temp->next->pre=newnode1;

temp->next=newnode1;
newnode1->pre=temp;

 







}
int main()
{

Node* newnode =new Node(10);
Node *head=newnode;
Node *tail=newnode;





insertingAtHead(22,head);
insertingAtTail(34,tail,head);



insertingAtPosition(2,56,head,tail);





del(4,head);
print(head);

}