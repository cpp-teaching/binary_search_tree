#ifndef BST_H
#define BST_H

template <typename T>
class BinarySearchTree
{
public:
    BinarySearchTree(const BinarySearchTree& other) = delete;
    BinarySearchTree(BinarySearchTree&& other) = delete;
    BinarySearchTree operator =(const BinarySearchTree& other) = delete;
    BinarySearchTree& operator =(BinarySearchTree&& other) = delete;


private:

    std::size_t m_size = 0;





};











#endif


