#include <iostream>

struct Node {
    int value;
    Node* next;
};

int main() {
    Node* head = nullptr;

    for (int v = 3; v >= 1; --v) {
        head = new Node{v, head};
    }

    for (Node* n = head; n != nullptr; n = n->next) {
        std::cout << n->value << ' ';
    }

    std::cout << '\n';

    while (head != nullptr) {
        Node* next = head->next;
        delete head;
        head = next;
    }
}
