#ifndef BINARYTHREE_H
#define BINARYTHREE_H

template <class T>
struct Node {
    T value;
    Node<T>* leftNode;
    Node<T>* rightNode;
    Node(T value);
};

template <typename T>
class BinaryThree {
private:
    Node<T>* RootNode;

public:
    BinaryThree();
    void add(T value);
};

template<typename T>
BinaryThree<T>::BinaryThree(): RootNode(nullptr) {}

template<class T>
Node<T>::Node(T value) {
    this->value = value;
    this->leftNode = nullptr;
    this->rightNode = nullptr;
}


template<typename T>
void BinaryThree<T>::add(T value) {
}



#endif