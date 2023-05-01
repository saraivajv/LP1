#include<iostream>
#include<string>
#include"node.hpp"
#ifndef LISTA_HPP
#define LISTA_HPP

template<class T>
class Lista
{
private:
    Node<T>* head;
public:
    Lista();

    ~Lista();
    
    void addFront(T node);
    void addBack(T node);
    void removeNode(T node);

    Node<T> *Buscar(T node);

    int tamanho();
    
};

template<class T>
Lista<T>::Lista(){
    head = 0;
}

template <class T>
Lista<T>::~Lista(){
    Node<T> *node = head;
    Node<T> *tempNode;

    while (node != nullptr)
    {
        tempNode = node;
        node = node->next;
        delete tempNode;
    }
    
}

template <class T>
void Lista<T>::addFront(T node){
    Node<T> *newNode = new Node<T>();
    newNode->data = node;

    if(head == nullptr){
        head = newNode;
        newNode->next = nullptr;
        newNode->prev = nullptr;
        return;
    }
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}

template <class T>
void Lista<T>::addBack(T node){
    Node<T> *newNode = new Node<T>();
    newNode->data = node;

    if(head == nullptr){
        head = newNode;
        newNode->next = nullptr;
        newNode->prev = nullptr;
        return;
    }
   Node<T> tempNode = head;
   while(tempNode->next != nullptr){
    tempNode = tempNode->next;
   }

   tempNode->next = newNode;
   newNode->prev = tempNode;
}

template <class T>
Node<T> *Lista<T>::Buscar(T node){
    Node<T>* tempNode = head;

    while(tempNode != nullptr){
        
        if(tempNode->data == node){
            return tempNode;
        }
        tempNode = tempNode->next;
    }

    return nullptr;
}

template <class T>
void Lista<T>::removeNode(T node){
    Node<T> *tempNode, tempNode2;

    if(head == nullptr){
        cout << "Lista sem elementos";
    }
    // Checando Node pelo head
   else if(head->data == node){
        tempNode = head;

        if(head->next != nullptr){
            head = head->next;
            head->prev = nullptr;
            delete tempNode;
            tempNode = nullptr;
        }
        else{
            delete head;
            head = nullptr;
            delete tempNode;
            tempNode = nullptr;
            return;
        }
   }

   tempNode2 = head;
   while(tempNode2->next->next != nullptr){

        // Node entre outros Nodes
        if(tempNode2->next->data == node){
            tempNode = tempNode2->next;
            tempNode2->next = tempNode->next;
            tempNode->next->prev = tempNode2;
            delete tempNode;
            tempNode = nullptr;
            return;
        }
        tempNode2 = tempNode2->next;
   }

    // Node fim da lista
   if(tempNode2->next->data == node){
            tempNode = tempNode2->next;
            delete tempNode;
            tempNode = nullptr;
            tempNode2->next = nullptr;
            return;
    }
    cout << "Elemento não encontrado" << endl;
}
template <class T>
int Lista<T>::tamanho(){
    if(head == nullptr){
        return 0;
    }

    Node<T> *tempNode = head;
    int n = 0;
    while(tempNode != nullptr){
        n++;
        tempNode = tempNode->next;
    }
    return n;
}

#endif //LISTA_HPP
