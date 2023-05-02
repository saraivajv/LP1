#include<iostream>
#include<string>
#ifndef NODE_HPP
#define NODE_HPP

/**
 * @file node.hpp
 * @brief classe node 
 */

using namespace std;
/**
 * @class Lista node.hpp "include/node.hpp" 
 * @brief criando a lista encadeada interna com os nodes
 */
template<class T>
class Lista;
/**
 * @class Node node.hpp "include/node.hpp" 
 * @brief definicao dos nodes
 */
template<class T>
class Node
{
/**
 * @class Lista<T> node.hpp "include/node.hpp" 
 * @brief lista de template criada
 */
    friend class Lista<T>;

private:
/**
 * @brief valor do node
 */
    T data;
/**
 * @brief iterador pro proximo node
 */
    Node<T> *next;
/**
 * @brief iterador pro node anterior 
 */
    Node<T> *prev;
    
public:
/**
 * @brief construtor padrao
 * @param NULL
 */
    Node();
/**
 * @brief construtor com valor dentro
 * @param T valor de template
 */
    Node(T);
/**
 * @brief destrutor padrao
 * @param NULL
 */
    ~Node();
/**
 * @brief metodo que retorna o valor dentro do node
 * @param NULL
 * @return T retorna valor de template
 */
    T getData();
/**
 * @brief metodo que retorna o iterador do proximo node
 * @param NULL
 * @return Node<T> retorna o iterador
 */
    Node<T> *getNext();
/**
 * @brief metodo que retorna o iterador do node anterior
 * @param NULL
 * @return Node<T> retorna o iterador
 */
    Node<T> *getPrev();
/**
 * @brief metodo setter de valor T
 * @param T conteudo do node
 */
    void setData(T data);


    
};

#endif //NODE_HPP
