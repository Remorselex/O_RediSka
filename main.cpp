//#include <iostream>
#include "src/Containers/LinkedList/LinkedList.h"
#include "src/Containers/BinaryThree/BinaryThree.h"

void List_Test() {
    LinkedList<int> list;
    list.push_back(1);
}

int main() {
    BinaryThree<int> three;
    three.add(11);
    three.add(10);
    three.add(7);
    three.add(8);
    three.print();

    return 0;
}
