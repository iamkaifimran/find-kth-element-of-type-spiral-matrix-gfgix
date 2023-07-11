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
void insertion(Node * &tail,int element, int data)
{
if(tail==NULL)
{

    Node *temp=new Node (data);
    tail=temp;

    temp->next=temp;

}
else{
Node *curr=tail;
while(curr->data!=element)
{
    curr=curr->next;

}
Node *temp1=new Node (data);
temp1->next=curr->next;
curr->next=temp1;







}





}
void print (Node *tail)
{



    Node *temp=tail;
    do{
        cout<<tail->data<<" ";
        tail=tail->next;

    }
    while(tail!=temp);

}
void deletion(Node *tail,int value)
{




    if(tail==NULL)
    {
        cout<<"empty ll"<<endl;
        return ;

    }
    else{
        Node *pre=tail;
        Node *curr=pre->next;
        while(curr->data!=value)
        {
            curr=curr->next;

        }
        if(curr==pre)
        {
            tail=NULL;
            
        }
        if(tail==curr)
        {
            tail=pre;

        }
        pre->next=curr->next;
        curr->next=NULL;
        delete curr;




    }
}


int main()
{


  
    Node *tail=NULL;
    insertion(tail,3,5);
  
 insertion(tail,5,8);
   insertion(tail,8,90);
  insertion(tail,90,564653);
 
deletion(tail,8);

deletion(tail,564653);
print (tail);
}