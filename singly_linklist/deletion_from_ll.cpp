#include<iostream>
using namespace std;
struct Node{
    int number;
    Node* next;
};
void deleteN(Node** head, int position)
{
    Node* temp;
    Node* prev;
    temp = *head;
    prev = *head;
    for (int i = 0; i < position; i++) {
        if (i == 0 && position == 1) {
            *head = (*head)->next;
            free(temp);
        }
        else {
            if (i == position - 1 && temp) {
                prev->next = temp->next;
                free(temp);
            }
            else {
                prev = temp;
 
                if (prev == NULL)
                    break;
                temp = temp->next;
            }
        }
    }
}
int main(){
    Node* list = (Node*)malloc(sizeof(Node));
}