//
// Created by Remorselex on 08.02.2025.
//
#ifndef DTSTRCT_THREE_NODE_H
#define DTSTRCT_THREE_NODE_H

template <class T>
struct Node {
    T Value;
    Node<T>* LeftNode;
    Node<T>* RightNode;
    explicit Node(T& value);
    //Node(T value, Node<T>* leftNode, Node<T>* rightNode);
    void addLeft(Node<T>* node);
    void addRight(Node<T>* node);
};

template<class T>
Node<T>::Node(T& value): Value(value), LeftNode(nullptr), RightNode(nullptr) {}

//template<class T>
//Node<T>::Node(T value, Node<T>* leftNode, Node<T>* rightNode): Value(value), LeftNode(leftNode), RightNode(rightNode) {}
#endif
