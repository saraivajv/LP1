#include<iostream>
#include<string>
#include"musica.hpp"
#ifndef NODE_HPP
#define NODE_HPP
class Node
{
private:
    Node* next;
    Musica m;
public:
    Node();
    Node(Node* n, Musica m);
    
    std::string getNome();
    std::string getArtista();

    void setArtista(std::string a);
    void setNome(std::string n);
    
};

#endif //NODE_HPP
