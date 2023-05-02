#include"playlist.hpp"
#include<iostream>
#include<string>

using namespace std;

    Playlist::Playlist(){
        
    }

    Playlist::~Playlist(){

    }

    Playlist::Playlist(std::string n)
{
    this->nome = n;
}

    Playlist::Playlist(std::string n, Lista<Musica> *m)
{
    this->nome = n;
    this->musicas = m;
}

    std::string Playlist::getNome()
{
        return this->nome;
}

    Lista<Musica>* Playlist::getMusicas()
{
    return this->musicas;
}

    Node<Musica>* Playlist::buscarMusica(Musica m)
{
    return this->musicas->Buscar(m);
}

    void Playlist::setNome(std::string n)
{
    this->nome = n;
}

    void Playlist::setMusicas(Lista<Musica> *m)
{
    this->musicas = m;
}

    void Playlist::addMusica(Musica m)
{
    this->musicas->addFront(m);
}

    void Playlist::deleteMusica(Musica m)
{
    this->musicas->removeNode(m);
}







