#ifndef BINARY_THREE_H
#define BINARY_THREE_H

#include "TreeNode.h"
#include "TreeUtils/TreeUtils.h"
#include "iostream"

template <typename T>
class BinaryTree {
private:
    Node<T>* RootNode;

    void addRecursive(Node<T>*& current, T& value);

public:
    BinaryTree();
    ~BinaryTree();

    void add(T value);
};

template<typename T>
BinaryTree<T>::~BinaryTree() {
    delete RootNode;
}

template<typename T>
BinaryTree<T>::BinaryTree(): RootNode(nullptr) {}

template<typename T>
void BinaryTree<T>::addRecursive(Node<T>*& current, T& value) {
    if(!current) {
        current = new Node<T>(value);
        return;
    }

    if (value < current->Value) {
        addRecursive(current->LeftNode, value);
    } else {
        addRecursive(current->RightNode, value);
    }

}

// add(10); add(8); add(7); ... add(n);
template<typename T>
void BinaryTree<T>::add(T value) {
    addRecursive(RootNode, value);
}

#endif