#include<iostream>
using namespace std;

//defining each node of the linked list
struct Node
{
    int data;
    Node * next;

};

//defining a list
class Lists
{
    Node * top;
    public:
    Lists()
    {
    top=NULL;
    }
    void Create_New_Node(int i);
    void Delete_Node(int n);
    void Display();
    void Insert_in_Position(int i,int n);
    void Delete_Duplicate();

};

//function to create a new node
void Lists::Create_New_Node(int i)
{
    Node * temp= new Node;
    temp->data=i;
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

//function to delete a node from the list
void Lists::Delete_Node(int n)
{
    Node * save =top;
    Node * save2;
    Node * temp;
    int i;
    if(n==1)
    { top=top->next;
      delete save;
    }
    else{
    for(i=2;i<n;i++)
    {
    save=save->next;
    }
    save2=save->next;
    temp=save2;
    save2=save2->next;
    save->next=save2;
    delete temp;
    }
}

void Lists::Insert_in_Position(int value,int pos)
{
    Node * save =top;
    Node * save2;
    Node * temp= new Node;
    temp->data=value;
    temp->next=NULL;

    if(top==NULL)
    {
     temp->next=top;
     top=temp;
    }
    else
    {
        for(int j=2;j<pos;j++)
        {
            save=save->next;
        }
            save2=save->next;

            save->next=temp;
            temp->next=save2;

    }

}

//function to delete duplicate elements from linked list
void Lists::Delete_Duplicate()
{
    Node * temp =top;
    Node * temp1;
    Node * temp2;
    int i,j;
    while(temp->next!=NULL)
    {
        temp1=temp->next;

        if(temp->data==temp1->data)
        {
            temp->next=temp1->next;
            delete temp1;
        }
            else
        {
            temp=temp->next;
        }


    }

}

//function to display the linked list
void Lists::Display()
{
        Node * temp =top;
        while(temp!=NULL)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }


}




int main()
{
    int n,i,n1,n2,j;
    Lists L1;
    cout<<"\n Enter the number of nodes in list: ";
    cin>>n;
    for(i=n;i>=1;i--)
    {   cout<<"\n Enter the data to be inserted to the node: ";
        cin>>j;
        L1.Create_New_Node(j);

    }
    cout<<"\n The linked list created is: ";
    L1.Display();
    L1.Delete_Duplicate();
    cout<<"\n \n The linked list after deleting duplicate element is: ";
    L1.Display();

    return 0;
}



