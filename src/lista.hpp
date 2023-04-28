#include<iostream>
#include<string>
#include"musica.hpp"
#include"node.hpp"
#ifndef LISTA_HPP
#define LISTA_HPP
class Lista
{
private:
    Node* head;
    Node* atual;
    Node* temp;
public:
    Lista();
    Lista(Node* h, Node* a, Node* t);

    ~Lista();
    
    Node* getNext();

    void addNode(Musica m);
    void deleteNode(Musica m);

    
};

#endif //LISTA_HPP
