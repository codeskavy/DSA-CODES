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