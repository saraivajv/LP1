#include"musica.hpp"
#include<iostream>
#include<string>

using namespace std;

    Musica::Musica(){
        
    }

    Musica::~Musica(){

    }

    Musica::Musica(std::string n, std::string a)
{
    this->nome = n ;
    this->artista = a ;
}

    std::string Musica::getArtista()
{
        return this->artista;
}

    std::string Musica::getNome()
{
        return this->nome;
}




