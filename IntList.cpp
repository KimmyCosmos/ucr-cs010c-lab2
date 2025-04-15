#include "IntList.h"

IntList::IntList() {
    dummyHead = new IntNode(0);
    dummyTail = new IntNode(0);
    dummyHead->next = dummyTail;
    dummyTail->prev = dummyHead;
}

IntList::~IntList() {
    while (!empty()) {
        pop_front();
    }
    delete dummyHead;
    delete dummyTail;
}

void IntList::push_front(int value) {
    IntNode* newNode = new IntNode(value);
    newNode->next = dummyHead->next;
    newNode->prev = dummyHead;
    dummyHead->next->prev = newNode;
    dummyHead->next = newNode;
}

void IntList::pop_front() {
    if (empty()) return;
    IntNode* toDelete = dummyHead->next;
    dummyHead->next = toDelete->next;
    toDelete->next->prev = dummyHead;
    delete toDelete;
}

void IntList::push_back(int value) {
    IntNode* newNode = new IntNode(value);
    newNode->prev = dummyTail->prev;
    newNode->next = dummyTail;
    dummyTail->prev->next = newNode;
    dummyTail->prev = newNode;
}

void IntList::pop_back() {
    if (empty()) return;
    IntNode* toDelete = dummyTail->prev;
    dummyTail->prev = toDelete->prev;
    toDelete->prev->next = dummyTail;
    delete toDelete;
}

bool IntList::empty() const {
    return dummyHead->next == dummyTail;
}

ostream & operator<<(ostream &out, const IntList &rhs) {
    IntNode* curr = rhs.dummyHead->next;
    while (curr != rhs.dummyTail) {
        out << curr->data;
        if (curr->next != rhs.dummyTail) {
            out << " ";
        }
        curr = curr->next;
    }
    return out;
}

void IntList::printReverse() const {
    IntNode* curr = dummyTail->prev;
    while (curr != dummyHead) {
        std::cout << curr->data;
        if (curr->prev != dummyHead) {
            std::cout << " ";
        }
        curr = curr->prev;
    }
}
