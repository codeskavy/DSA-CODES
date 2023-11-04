#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
};

bool detectloop(Node* h){
    unordered_set<Node*> s; // we use a set 
    while(h!=NULL){
        if(s.find(h)!=s.end())
            return true;

        s.insert(h);
        h=h->next;
    }

}