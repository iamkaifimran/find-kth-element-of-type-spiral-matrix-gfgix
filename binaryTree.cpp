#include<iostream>
#include<queue>
using namespace std;
 class Node
 {



    public:
    int data;
    Node *left;
    Node *right;



    Node (int d)
    {


        this->data=d;
        this->left=NULL;
        this->right=NULL;

    }




 };

 void  levelOrderTraversal(Node *root)
 {

queue<Node *>q;
q.push(root);
q.push(NULL);
while(!q.empty())
{
Node *temp=q.front();
q.pop();
if(temp==NULL)
{
   cout<<endl;
   if(!q.empty())
   {
      q.push(NULL);

   }



}
else
{
cout<<temp->data<<" ";
if(temp->left)
{
   q.push(temp->left);

}
if(temp->right)
{
   q.push(temp->right);

}




}





}






 }




 Node *buildTree(Node *root)
 {




cout<<"enter the data:" <<endl;

int data;
cin>>data;
root=new Node (data);
if(data==-1)
return NULL;
cout<<"enter data in the left part:"<<endl;
root->left=buildTree(root->left);
cout<<"enter elements int right part:"<<endl;
root->right=buildTree(root->right);
return root;


 }


 void inOrderTraversal(Node *root)
 {



   if(root==NULL)
   {
      return ;

   }

inOrderTraversal(root->left);
cout<<root->data <<" ";
inOrderTraversal(root->right);


 }
 void preOrderTraversal(Node *root)
 {
if(root==NULL)
{
   return ;

}
cout<<root->data <<" ";
preOrderTraversal(root->left);
preOrderTraversal(root->right);










 }

void  postOrderTraversal(Node *root)
{



   if(root==NULL)
   {
      return ;

   }



    postOrderTraversal(root->left);
     postOrderTraversal(root->right);
     cout<<root->data<<" ";

}

 int main()
 {





    Node *root=NULL;
    root =buildTree(root);
    levelOrderTraversal(root);
   /* inOrderTraversal(root);*/
    /*preOrderTraversal(root);*/

    postOrderTraversal(root);




    return 0;

 }


