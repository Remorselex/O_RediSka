//
// Created by Remorselex on 08.02.2025.
//
#ifndef DTSTRCT_THREE_UTILS_H
#define DTSTRCT_THREE_UTILS_H

#include "iostream"
#include "../ThreeNode.h"

namespace ThreeUtils {
    template <typename T>
    void nodePrinter(const std::string& NodeSignature, Node<T>* NodeToPrint);
}

namespace ThreeUtils {
    template <typename T>
    inline void nodePrinter(const std::string& NodeSignature, Node<T>* NodeToPrint) {
        std::cout << NodeSignature << ": " << NodeToPrint->Value << std::endl
                  << "left node: " << NodeToPrint->LeftNode << std::endl
                  << "right node: " << NodeToPrint->RightNode;
    }
}
#endif
