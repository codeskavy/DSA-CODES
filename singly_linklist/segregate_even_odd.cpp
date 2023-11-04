#include <bits/stdc++.h> 
using namespace std; 
class Node  
{  public: 
    int data;  
    Node *next;  
};

void segregate(Node **head){
    Node *end=*head;
    Node *prev=NULL;
    Node *curr=*head;


    while(end->next!=NULL){
        end=end->next;
    Node *new_end=end;
    //new_end is pointing to the last node

    while(curr->data%2!=0 && curr!=end){
        new_end->next=curr
    curr = curr->next;  
        new_end->next->next = NULL;  
        new_end = new_end->next;  
    }  
  
    // 10->8->17->17->15  
    /* Do following steps only if  
    there is any even node */
    if (curr->data%2 == 0)  
    {  
        /* Change the head pointer to  
        point to first even node */
        *head_ref = curr;  
  
        /* now current points to 
        the first even node */
        while (curr != end)  
        {  
            if ( (curr->data) % 2 == 0 )  
            {  
                prev = curr;  
                curr = curr->next;  
            }  
            else
            {  
                /* break the link between 
                prev and current */
                prev->next = curr->next;  
  
                /* Make next of curr as NULL */
                curr->next = NULL;  
  
                /* Move curr to end */
                new_end->next = curr;  
  
                /* make curr as new end of list */
                new_end = curr;  
  
                /* Update current pointer to 
                next of the moved node */
                curr = prev->next;  
            }  
        }  
    }  
  
    /* We must have prev set before executing  
    lines following this statement */
    else prev = curr;  
  
    /* If there are more than 1 odd nodes  
    and end of original list is odd then  
    move this node to end to maintain  
    same order of odd numbers in modified list */
    if (new_end != end && (end->data) % 2 != 0)  
    {  
        prev->next = end->next;  
        end->next = NULL;  
        new_end->next = end;  
    }  
    return;  
}  
    }
}
