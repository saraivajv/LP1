#include<iostream>
#include<string>
#ifndef NODE_HPP
#define NODE_HPP

template<class T>
class Lista;

template<class T>
class Node
{
    friend class Lista<T>;

private:
    T data;
    Node<T> *next;
    Node<T> *prev;
    
public:
    Node();
    Node(T);
    
    ~Node();

    T getData();
    Node<T> *getNext();
    Node<T> *getPrev();
    
};

#endif //NODE_HPP
