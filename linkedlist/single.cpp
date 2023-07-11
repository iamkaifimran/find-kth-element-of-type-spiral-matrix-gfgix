#include<iostream>
#include<map>
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


};


void insertAtHead(Node* &head, int data)
{
Node*temp=new Node(data);
temp->next=head;
head=temp;






}
void print (Node *head)
{
while(head!=NULL)
{
    cout<<head->data<<" ";

head=head->next;
}





}
Node *floydDetect(Node *head)
{
if(head==NULL)
{
    return NULL;

}
Node *fast=head;
Node *slow=head;
while(fast!=NULL)
{


    fast=fast->next;
    if(fast!=NULL)
    {
        fast=fast->next;

    }
    slow=slow->next;
    if(slow==fast)
    {
        return slow;

    }
}


return NULL;


       

    }







bool detectCycle(Node *head)
{
if(head==NULL)
{
    return false;

}
map<Node*,bool> visited;
Node*temp=head;

while(head!=NULL)
{
if(visited[temp]==true)
{
    return true;

}
visited[temp]=true;
temp=temp->next;

    
}
return false;





}
void insertingAtTail(int data, Node *&tail, Node *& head)
{


Node *temp=new Node (data);
tail->next=temp;

tail=temp;





}
Node *getStarting(Node * head)
{
    Node *intersection=






}


void removeLoop(Node *head)
{
Node *startnode=floydDetect(head);
Node *temp=startnode;
while(temp->next!=startnode)
{
    temp=temp->next;

}
temp->next=NULL;





}

int main()
{
Node *node1=new Node(10);
Node*head=node1;
Node *tail=node1;

insertAtHead(head,6);
insertAtHead(head,7);
insertAtHead(head,8);
insertAtHead(head,9);

insertingAtTail(43,tail,head);




tail->next=head->next;  


cout<<endl;



////if(detectCycle(head)==true)
//{
 ///   cout<<"cycle found ";

//}
///cout<<"cycle not found";
Node  *temp=floydDetect(head);

if(temp!=NULL)

{
cout<<temp->data <<" : " <<"is the first node of the loop";

cout<<endl;
}



else
{
    cout<<"cycle not found";

}
removeLoop(head);


print(head);

}