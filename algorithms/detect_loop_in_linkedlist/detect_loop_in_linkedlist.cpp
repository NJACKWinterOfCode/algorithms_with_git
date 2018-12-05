// C++ program to return first node of loop. 
#include <bits/stdc++.h> 
using namespace std; 
  
struct Node { 
    int key; 
    struct Node* next; 
}; 
  
Node* newNode(int key) 
{ 
    Node* temp = new Node; 
    temp->key = key; 
    temp->next = NULL; 
    return temp; 
} 

//function to detect if there is a loop 
//and if present return the start pointer of loop
Node* detectAndRemoveLoop(Node* head) 
{ 
    // If list is empty or has only one node 
    // without loop 
    if (head == NULL || head->next == NULL) 
        return NULL; 
  
    Node *sp = head, *fp = head; 
    //sp-slow_pointer, fp-fast_pointer
    // Move slow and fast 1 and 2 steps 
    // ahead respectively. 
    sp = sp->next; 
    fp = fp->next->next; 
  
    // Search for loop using sp and fp 
    
    while (fp && fp->next)
    { 
        if (sp == fp)   //meeting point 
            break; 
        sp = sp->next; 
        fp = fp->next->next; 
    } 
  
    // If loop does not exist   
    if (sp!= fp) 
        return NULL; 
  
    // If loop exists. Start slow from 
    // head and fast from meeting point. 
    sp = head; 
    while (sp != fp) { 
        //move by same speed until they meet
        // to detect starting point of loop 
        sp= sp->next; 
        fp = fp->next; 
    } 
  
    return sp; 
} 

/* Main program to test above function*/
int main() 
{ 
    Node* head = newNode(40); 
    head->next = newNode(25); 
    head->next->next = newNode(10); 
    head->next->next->next = newNode(4); 
    head->next->next->next->next = newNode(8); 
  
    /* Create a loop for testing */
    head->next->next->next->next->next = head->next->next; 
  
    Node* res = detectAndRemoveLoop(head); 
    if (res == NULL) 
        cout << "Loop does not exist"; 
    else
        cout << "Loop starting node is " << res->key; 
  
    return 0; 
} 