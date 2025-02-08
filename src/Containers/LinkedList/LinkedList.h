/*TODO Write tests for containers
 * also this is very simple realization of header-only container file
 * mb in future it will be used in my other solutions so it will be tested and improved
 * [[maybe_unused]] is a temp crutch for kill warnings */

#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "LinkedListNode.h"
#include <iostream>
#include <stdexcept>

template<class T>
class [[maybe_unused]] LinkedList {
private:
    LinkedListNode<T>* lastNode = nullptr;
    LinkedListNode<T>* firstNode = nullptr;
    int nodesCount{};

public:
    LinkedList();

    [[maybe_unused]] void push_back(T value);

    [[maybe_unused]] void print();

    [[maybe_unused]] T at(int index);

    [[maybe_unused]] void remove(int index);

    [[maybe_unused]] int size();
};

template<class T>
LinkedListNode<T>::LinkedListNode(T Value) : value(Value), next(nullptr) {}

template<class T>
LinkedListNode<T>::~LinkedListNode() {
    this->value = T{};
    this->next = nullptr;
    std::cout << "destructured" << std::endl;
}

template<class T>
LinkedList<T>::LinkedList() :   lastNode(nullptr), firstNode(nullptr), nodesCount(0){}

template<class T>
[[maybe_unused]] void LinkedList<T>::push_back(T value) {
    auto* newNode = new LinkedListNode<T>(value);

    if(firstNode == nullptr) {
        firstNode = newNode;
        lastNode = newNode;
    } else {
        lastNode->next = newNode;
        lastNode = newNode;
    }

    nodesCount++;
}

template<class T>
[[maybe_unused]] T LinkedList<T>::at(int index) {
    if(index < 0) {
        throw std::out_of_range("index < 0");
    }

    if (nodesCount < index + 1) {
        std::string errMessage = "index is too big :))))) ? Nodes count: "
                + std::to_string(nodesCount)
                + " index: "
                + std::to_string(index);

        throw std::out_of_range(errMessage);
    }

    LinkedListNode<T>* currentNode = firstNode;

    for (int i = 0; i <= index; ++i) {
        if(i == index) {
            return currentNode->value;
        }
        currentNode = currentNode->next;
    }

}

template<class T>
[[maybe_unused]] void LinkedList<T>::remove(int index) {

    if(index < 0) {
        throw std::out_of_range("index < 0");
    }

    if(nodesCount <= index ) {
        throw std::out_of_range("index is too big :))))) ? ");
    }

    auto* currentNode = firstNode;

    if(index == 0) {
        firstNode = currentNode->next;
        std::cout << "deleted lol: " << currentNode->value << std::endl;
        delete currentNode;
    } else {
        for (int i = 0; i < index - 1; ++i) {
            currentNode = currentNode->next;
        }

        auto* nodeToDelete = currentNode->next;
        currentNode->next = nodeToDelete->next;

        std::cout << "deleted: " << nodeToDelete->value << std::endl;
        delete nodeToDelete;
    }
    --nodesCount;
}

template <class T>
[[maybe_unused]] int LinkedList<T>::size() {
    return this->nodesCount - 1;
}

template <class T>
[[maybe_unused]] void LinkedList<T>::print() {
        LinkedListNode<T>* current = firstNode;
        while (current != nullptr) {
            std::cout
            << "next: " << current->next
            << " "
            << "value: " << current->value
            << ";\n";
            current = current->next;
        }
        std::cout << std::endl;
}
#endif