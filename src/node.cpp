#include"node.hpp"
#include<iostream>
#include<string>

using namespace std;

    template<class T>
    Node<T>::Node(){
        data = nullptr;
        next = 0;
        prev = 0;
    }
    
    template<class T>
    Node<T>::~Node(){
        
    }

    template<class T>
    Node<T>::Node(T node){
        data = node;
        next = 0;
        prev = 0;
    }

    template<class T>
    T Node<T>::getData(){
        return data;
    }  




