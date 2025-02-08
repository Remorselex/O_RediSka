#ifndef BINARY_THREE_H
#define BINARY_THREE_H

#include "ThreeNode.h"
#include "ThreeUtils/ThreeUtils.h"

template <typename T>
class BinaryThree {
private:
    Node<T>* RootNode;
    void addRecursive(T& value, Node<T>* nextNode, Node<T>* currentNode);
    void printRecursive(Node<T>* NodeToPrint, bool isRoot = false);

public:
    BinaryThree();
    void add(T value);
    void print();
};

template<typename T>
BinaryThree<T>::BinaryThree(): RootNode(nullptr) {}

template<class T>
void Node<T>::addLeft(Node<T>* node) {
    this->LeftNode = node;
}

template<class T>
void Node<T>::addRight(Node<T>* node) {
    this->RightNode = node;
}

template<typename T>
void BinaryThree<T>::addRecursive(T& value, Node<T>* nextNode, Node<T>* currentNode) {
    Node<T>* NEW_NODE = new Node(value);

    if (currentNode == nullptr) {
        return;
    }

    if(nextNode->Value < currentNode->Value && currentNode->LeftNode == nullptr) {
        currentNode->addLeft(NEW_NODE);
        return;
    } else {
        addRecursive(value,  NEW_NODE,currentNode->LeftNode);
    }

    if(nextNode->Value > currentNode->Value && currentNode->RightNode == nullptr) {
        currentNode->addRight(NEW_NODE);
        return;
    } else {
        addRecursive(value,  NEW_NODE, currentNode->RightNode);
    }

}

// add(10); add(8); add(7); ... add(n);
template<typename T>
void BinaryThree<T>::add(T value) {
    Node<T>* node = new Node(value);
    if(this->RootNode == nullptr) {
        this->RootNode =  node;
    } else {
        addRecursive(value, node,RootNode);
    }
}

template<typename T>
void BinaryThree<T>::printRecursive(Node<T>* NodeToPrint, bool isRoot) {
    if(isRoot) {
        ThreeUtils::nodePrinter("Root", NodeToPrint);
    }
}

template<typename T>
void BinaryThree<T>::print() {
    if(RootNode == nullptr) {
        std::cout << "Three is empty";
    } else {
        printRecursive(RootNode, true);
    }
}

#endif