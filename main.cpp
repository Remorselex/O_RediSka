//#include <iostream>
#include "src/Containers/LinkedList/LinkedList.h"
#include "src/Containers/BinaryTree/BinaryTree.h"

void List_Test() {
    LinkedList<int> list;
    list.push_back(1);
}

int main() {
    BinaryTree<int> three;
    three.add(11);
    three.add(10);
    three.add(7);
    three.add(8);
    three.add(9);
    three.add(12);

    return 0;
}
