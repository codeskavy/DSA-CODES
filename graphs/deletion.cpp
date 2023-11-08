#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
};

void deletion(int val, Node*& head) {
    Node* current = head;
    Node* prev = nullptr;

    while (current != nullptr) {
        if (current->data == val) {
            if (prev == nullptr) {
                head = current->next;
            } else {
                prev->next = current->next;
            }
            delete current;
            return;
        }
        prev = current;
        current = current->next;
    }
}

int main() {
    Node* head = nullptr;
    head = new Node();
    head->data = 32;

    head->next = new Node();
    head->next->data = 67;

    head->next->next=new Node();
    head->next->next->data = 56;

    int val;

    cout << "Enter the value to search and delete: ";
    cin >> val;

    deletion(val, head);

    Node* current = head;
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }


    while (head != nullptr) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}
