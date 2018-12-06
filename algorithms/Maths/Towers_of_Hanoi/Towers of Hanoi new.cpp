/********  Implementation of Tower of Hanoi using C++  *******/

#include<iostream>
using namespace std;

//Represents each disc of the tower
struct Node
{
    int data;
    Node * next;
};

//Representing a tower
class Stack
{   int towername;
    Node * top;         //top is a pointer to the topmost disc on a tower
    public:
        Stack(int x)
        {
            top=NULL;
            towername=x; //define the name of the tower
        }
        void push(int i);
        int pop();
        void display();

};

//Inserting a disc on the tower
void Stack::push(int i)
{
    Node* temp =new Node;       //Initializing a new disc
    temp->data=i;
    temp->next=NULL;

    if (top == NULL)           //Check if the tower has any disc,if not initialize the new disc as the topmost
    {
        top = temp;
    }
    else
    {
        temp->next = top;       //If the tower already has a disc then insert the new disc on top of the previous disc
        top = temp;
    }

}

//Popping out a disc from the top of the tower
int Stack::pop()
{
     if (top == NULL)  //If the tower has no discs than return -1
    {
        return -1;
    }
    else
    {
        Node* save=top;         //Temporarily save the topmost disc
        top = top->next;        //Initialize the disc below the previous top as the new topmost
        return(save->data);
        delete(save);
    }
}

//Displaying the discs of the tower
void Stack::display()
{
    Node* temp=top;
    cout<<"\n";
    cout<<"Tower "<<towername<<"->"<<"\t";
    while(temp!=NULL)           //Trace the tower until there is no disc left i.e. till the last disc is reached
    {
        cout<<temp->data<<"\t";
        temp=temp->next;

    }
    cout<<"\n";
}

//Function to move the discs from Tower 1 to Tower 3 with Tower 2 as intermediary
void mov(int n,Stack &A,Stack &B,Stack &C)
{   int i,j;
    if(n==1)
    {
        i=A.pop();              //A->C
        C.push(i);

    }
    else{
    mov(n-1,A,C,B);
    i=A.pop();                  //A->C
    C.push(i);
    mov(n-1,B,A,C);
    }
    return;


}

int main()
{   Stack A(1);
    Stack B(2);
    Stack C(3);
    int n, i;
    cout<<"enter the number of discs\n";
    cin>>n;
    for (i = n; i >= 1; i--)
    {
        A.push(i);
    }
    A.display();
    B.display();
    C.display();
    mov(n,A,B,C);
    cout<<"\n The status of towers after calling the function - \n";
    A.display();
    B.display();
    C.display();


}
