#include<iostream>
#include<string>
#include"node.hpp"
#ifndef LISTA_HPP
#define LISTA_HPP

/**
 * @file lista.hpp
 * 
 * @brief Implementação da lista 
 * 
 */

using namespace std;


/**
 *  @class Lista lista.hpp "include/lista.hpp"
    @brief Implementação de uma classe Lista
    @param T Variável template
 * 
 */
template<class T>
class Lista
{
private:
/**
 * @brief Inicio da lista
 * 
 */
    Node<T>* head;
public:
    /**
     * @brief Construtor de objeto Lista
     * @param NULL
     * 
     */
    Lista();
    /**
     * @brief Destrutor de objeto Lista
     * @param NULL
     * 
     */
    ~Lista();
    /**
     * @brief Função que insere elemento na frente da lista
     * 
     * @param node Valor que será inserido 
     */
    void addFront(T node);
    /**
     * @brief Função que insere elemento atrás da lista
     * 
     * @param node Valor que será inserido 
     */
    void addBack(T node);
    /**
     * @brief Função que remove elemento da lista
     * 
     * @param node Valor que será removido 
     */
    void removeNode(T node);
    /**
     * @brief Função que printa a lista
     * 
     * @param NULL
     */
    void printLista();

    /**
     * @brief Função que busca elemento na lista
     * @return Iterador para o valor
     * @param node Valor que será buscado 
     */
    Node<T> *Buscar(T node);

    
};
/**
     * Construtor
     *
     */
template<class T>
Lista<T>::Lista(){
    head = nullptr;
}

/**
     * Destrutor
     *
     */
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
/**
     * Insere elemento na frente da lista
     *
     */
template <class T>
void Lista<T>::addFront(T node){
    Node<T> *newNode = new Node<T>;
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

/**
     * Insere elemento atrás da lista
     *
     */
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
   Node<T> *tempNode = head;
   while(tempNode->next != nullptr){
    tempNode = tempNode->next;
   }

   tempNode->next = newNode;
   newNode->prev = tempNode;
}

/**
     * Busca elemento na lista
     *
     */
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

/**
     * Remove elemento da lista
     *
     */
template <class T>
void Lista<T>::removeNode(T node){
    Node<T> *tempNode, *tempNode2;

    if(head == nullptr){
        cout << "Lista sem elementos";
    }
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

   if(tempNode2->next->data == node){
            tempNode = tempNode2->next;
            delete tempNode;
            tempNode = nullptr;
            tempNode2->next = nullptr;
            return;
    }
    cout << "Elemento não encontrado" << endl;
}

/**
     * Printa a lista
     *
     */
template <class T>
void Lista<T>::printLista(){

    Node<T> *tempNode = head;
    if(tempNode == nullptr){
        cout << "Lista vazia" << endl;
        return;
    }
    if(tempNode->next == nullptr){
        cout << tempNode->data << endl;
        return;
    }
    else{
        while(tempNode != nullptr){
            cout << tempNode->data << endl;
            tempNode = tempNode->next;
        }
    }
}

#endif //LISTA_HPP
