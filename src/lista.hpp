#include<iostream>
#include<string>
#include"musica.hpp"
#include"node.hpp"
#ifndef LISTA_HPP
#define LISTA_HPP
class Lista
{
private:
    Node* head, atual, temp;
    Musica musica;
public:
    Lista();
    Lista(Node* n, Musica m);
    
    Node* getNext();
    Musica getMusica();

    void setNext(Node* n);
    void setMusica(Musica M);
    
};

#endif //LISTA_HPP
