#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int key;
    Node* next;

    
};
Node* new_node(int key){
        Node*temp=new Node;
        temp->key=key;
        temp->next=NULL;
        return temp;
    }
int main(){
    Node*a=new_node(5);
    a->next=new_node(10);
    a->next->next=new_node(15);

    Node*b=new_node(2);
    b->next=new_node(3);
    b->next->next=new_node(20);

    vector<int> v;
    while(a!=NULL){
        v.push_back(a->key);
        a=a->next;
    }

    while(b!=NULL){
        v.push_back(b->key);
        b=b->next;    
        }
    sort(v.begin(),v.end());
    Node*result=new_node(-1);
    Node*temp=result;
    for(int i=0;i<v.size();i++){
        result->next=new_node(v[i]);
        result=result->next;
    }
    temp=temp->next;
    cout<<"resultant merged list"<<endl;
    while(temp!=NULL){
        cout<<temp->key<<" ";
        temp=temp->next;
    }
    return 0;


}
