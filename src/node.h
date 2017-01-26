



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
    //instead of just having m_data (data), the std::move just moves the data value
    //to its new master
    m_data(std::move(data))
    {}

    BinaryTreeNode* left_child() {
    return m_left_child;
    }

    BinaryTreeNode* right_child() {
    return m_right_child;
    }

    void set_right_child(T right_child) {
    m_right_child(std::move(right_child));
    }

    void set_left_child(T left_child) {
    m_left_child(std::move(left_child));
    }


    const T& data() const{
    return m_data;
    }

private:
    T m_data;

    std::unique_ptr<BinaryTreeNode<T>> m_left_child;
    std::unique_ptr<BinaryTreeNode<T>> m_right_child;



};










#endif


