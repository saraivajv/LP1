#include<iostream>
#include<string>
#include"musica.hpp"
#ifndef NODE_HPP
#define NODE_HPP
class Node
{
private:
    Node* next;
    Musica musica;
public:
    Node();
    Node(Node* n, Musica m);
    
    ~Node();
    
    Node* getNext();
    Musica getMusica();

    void setNext(Node* n);
    void setMusica(Musica M);
    
};

#endif //NODE_HPP
