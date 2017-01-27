#ifndef BST_H
#define BST_H
#include "node.h"
#include <cstddef>
#include <memory>




template <typename T>
class BinarySearchTree
{
public:

    BinarySearchTree(){}


    BinarySearchTree(const BinarySearchTree& other) = delete;
    BinarySearchTree(BinarySearchTree&& other) = delete;
    BinarySearchTree operator =(const BinarySearchTree& other) = delete;
    BinarySearchTree& operator =(BinarySearchTree&& other) = delete;


    std::size_t size() const{
    return m_size;
    }



private:

    std::size_t m_size = 0;

    std::unique_ptr<BinaryTreeNode<T>> m_root_node;



};











#endif


