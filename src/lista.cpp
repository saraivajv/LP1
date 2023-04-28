#include"musica.hpp"
#include"lista.hpp"
#include"node.hpp"
#include<iostream>
#include<string>

using namespace std;

    Lista::Lista(){
        head = NULL;
        atual = NULL;
        temp = NULL;
    }

    Lista::~Lista(){

    }


    void Lista::addNode(Musica m){
        Node* n = new Node;
        n->setNext(NULL);
        n->setMusica(m);

        if(head != NULL){
            atual = head;
            while(atual->getNext() != NULL){
                atual = atual->getNext();
            }
            atual->setNext(n);
        }
        else{
            head = n;
        }

    }



