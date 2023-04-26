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
    this->m = m;
}



