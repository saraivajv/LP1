#include"musica.hpp"
#include"node.hpp"
#include<iostream>
#include<string>

using namespace std;

    Node::Node(){
        
    }

    Node::Node(Node* n, Musica m)
{
    this->next = n;
    this->musica = m;
}

Node* Node::getNext()
{
        return this->next;
}

Musica Node::getMusica()
{
        return this->musica;
}

void Node::setNext(Node* n)
{
        this->next = n;
} 

void Node::setMusica(Musica m)
{
        this->musica = m;
} 



