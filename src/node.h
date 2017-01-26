



#ifndef NODE_H
#define NODE_H

#include <cstddef>
#include <memory>



template <typename T>
class BinaryTreeNode
{

std::unique_ptr<BinaryTreeNode<T> > left_child;
std::unique_ptr<BinaryTreeNode<T> > right_child;



};










#endif


