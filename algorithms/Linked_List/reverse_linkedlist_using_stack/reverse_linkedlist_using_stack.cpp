#include<iostream>
#include<stdio.h>
#include<cstring>


using namespace std;

//defining each node of the linked list
struct Node
{   int info;
    Node * data;
    Node * next;            //it holds the address of the next node of the linked list
};

//implementing a stack
class Stack
{
    Node * top;             // node on the top of the stack
    public:
        Stack()
        {
            top=NULL;
        }
        void push(Node *);
        Node * pop();
        int isEmpty();


};

//pushing a node to the stack
void Stack::push(Node * c)
{
    Node* temp =new Node;       //declaring a temporary node
    temp->data=c;
    temp->next=NULL;

    if (top == NULL)           //check if the stack is empty
    {
        top = temp;
    }
    else
    {
        temp->next = top;
        top = temp;
    }

}

//popping a node from the top of the stack
Node * Stack::pop()
{
     if (top == NULL)           //check if the stack is empty
    {

        return NULL;
    }
    else
    {
        Node* save=top;         //make the new node as the topmost node and make it point to the previous top
        top = top->next;
        return(save->data);
        delete(save);
    }
}

//function to check if the stack is empty
int Stack::isEmpty()
{
    Node* temp=top;

    if(temp==NULL)
        return -1;
    else
        return 1;


}

//defining a list
class Lists
{   public:
    Node * top;
    Lists()
    {
    top=NULL;
    }
    void create_node(int i);
    void display();


};

//inserting a node to the list
void Lists::create_node(int i)
{
    Node * temp=new Node;
    temp->info=i;
    temp->next=NULL;

    if(top==NULL)
    {
    top=temp;
    }
    else
    {
    temp->next=top;
    top=temp;


    }

}

//displaying the contents of the list
void Lists::display()
{
    Node * temp=top;
    while(temp!=NULL)
    {
    cout<<temp->info<<" ";
    temp=temp->next;

    }
}

//function to reverse the linked list
void Reverse_List(Lists & L1)
{
    Stack S;
    Node * temp=L1.top;

    while(temp!=NULL)
    {
       S.push(temp);                //pushing the addresses of the linked list to the stack
       temp=temp->next;
    }

    temp=S.pop();
    L1.top=temp;
    while(S.isEmpty()!=-1)
    {
        temp->next=S.pop();
        temp=temp->next;
    }

    temp->next=NULL;


}

int main()
{
    Lists L1;
    Stack S;
    int n;
    for(int i=1;i<=5;i++)
    {
        cout<<"\n Enter the data for node "<<i<<": ";
        cin>>n;
        L1.create_node(n);
    }
    cout<<"\nThe linked list created is: ";
    L1.display();

    Reverse_List(L1);
    cout<<"\nThe linked list after reversing is: ";
    L1.display();



}
