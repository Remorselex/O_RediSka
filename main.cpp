//#include <iostream>
#include "src/Containers/LinkedList/LinkedList.h"
#include "src/Containers/BinaryTree/BinaryTree.h"

void List_Test() {
    LinkedList<int> list;
    list.push_back(1);
}

//balanced
void Test_Tree_Deletion_1() {
    BinaryTree<int> three;
    three.add(10);
    three.add(5);
    three.add(3);
    three.add(7);
    three.add(15);
    three.add(12);
    three.add(20);
}

//not balanced
void Test_Tree_Deletion_2() {
    BinaryTree<int> three;
    three.add(11);
    three.add(10);
    three.add(7);
    three.add(8);
    three.add(9);
    three.add(12);
}

int main() {
    Test_Tree_Deletion_2();


    List_Test();
    return 0;
}
