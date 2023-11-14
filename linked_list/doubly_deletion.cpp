#include <iostream>

class Node {
public:
    int data;
    Node* prev;
    Node* next;

    Node(int value) : data(value), prev(nullptr), next(nullptr) {}
};

class DoublyLinkedList {
private:
    Node* head;
    Node* tail;

public:
    DoublyLinkedList() : head(nullptr), tail(nullptr) {}

    // Function to insert a node at the beginning of the list
    void insertAtBeginning(int value) {
        Node* newNode = new Node(value);
        if (!head) {
            head = tail = newNode;
        } else {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
    }

    // Function to insert a node at the end of the list
    void insertAtEnd(int value) {
        Node* newNode = new Node(value);
        if (!head) {
            head = tail = newNode;
        } else {
            newNode->prev = tail;
            tail->next = newNode;
            tail = newNode;
        }
    }

    // Function to delete a node after a specific node
    void deleteAfterNode(Node* prevNode) {
        if (!prevNode || !prevNode->next) {
            std::cout << "Invalid node or no node after the given node to delete." << std::endl;
            return;
        }

        Node* nodeToDelete = prevNode->next;
        prevNode->next = nodeToDelete->next;
        if (nodeToDelete->next) {
            nodeToDelete->next->prev = prevNode;
        }
        delete nodeToDelete;
    }

    // Function to delete a node from the end of the list
    void deleteFromEnd() {
        if (!head) {
            std::cout << "List is empty. Cannot delete from an empty list." << std::endl;
            return;
        }

        Node* nodeToDelete = tail;
        tail = tail->prev;
        if (tail) {
            tail->next = nullptr;
        } else {
            // If there was only one element in the list
            head = nullptr;
        }
        delete nodeToDelete;
    }

    // Function to delete a node from the beginning of the list
    void deleteFromBeginning() {
        if (!head) {
            std::cout << "List is empty. Cannot delete from an empty list." << std::endl;
            return;
        }

        Node* nodeToDelete = head;
        head = head->next;
        if (head) {
            head->prev = nullptr;
        } else {
            // If there was only one element in the list
            tail = nullptr;
        }
        delete nodeToDelete;
    }

    // Function to display the doubly linked list
    void displayList() {
        Node* current = head;
        while (current) {
            std::cout << current->data << " ";
            current = current->next;
        }
        std::cout << std::endl;
    }
};

int main() {
    DoublyLinkedList myList;

    myList.insertAtBeginning(1);
    myList.insertAtEnd(2);
    myList.insertAtEnd(3);
    myList.insertAtEnd(4);

    std::cout << "Doubly Linked List before deletion: ";
    myList.displayList();

    Node* nodeToDeleteAfter = myList.head;
    myList.deleteAfterNode(nodeToDeleteAfter);
    std::cout << "Doubly Linked List after deleting node after the first node: ";
    myList.displayList();

    myList.deleteFromEnd();
    std::cout << "Doubly Linked List after deleting from the end: ";
    myList.displayList();

    myList.deleteFromBeginning();
    std::cout << "Doubly Linked List after deleting from the beginning: ";
    myList.displayList();

    return 0;
}
