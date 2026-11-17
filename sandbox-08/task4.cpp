#include <iostream>

struct Node {
    int value;
    Node* next;
};

int main() {
    Node* head = nullptr;
    Node* tail = nullptr;

    for (int v = 1; v <= 3; ++v) {
        Node* node = new Node{v, nullptr};

        if (head == nullptr) {
            head = node;
            tail = node;
        } else {
            tail->next = node;
            tail = node;
        }
    }

    int length = 0;

    for (Node* n = head; n != nullptr; n = n->next) {
        std::cout << n->value << ' ';
        length++;
    }

    std::cout << '\n';
    std::cout << length << '\n';

    while (head != nullptr) {
        Node* next = head->next;
        delete head;
        head = next;
    }

    return 0;
}
