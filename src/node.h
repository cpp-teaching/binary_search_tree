



#ifndef NODE_H
#define NODE_H

#include <cstddef>
#include <memory>



template <typename T>
class BinaryTreeNode
{
public:

    BinaryTreeNode(){}


    BinaryTreeNode(T data):
    m_data (data)
    {}

    std::unique_ptr<BinaryTreeNode<T>> m_left_child;
    std::unique_ptr<BinaryTreeNode<T>> m_right_child;

    T data(){
    return data;
    }



private:
    T m_data;


};










#endif


