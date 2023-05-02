#include<iostream>
#include<string>
#include"musica.hpp"
#include"lista.hpp"
#ifndef PLAYLIST_HPP
#define PLAYLIST_HPP

/**
 *   @file playlist.hpp
 *   @brief definicao classe playlist
 */

using namespace std;
/**
 *   @class Playlist playlist.hpp include/playlist.hpp
 *   @brief definicao classe playlist
 */
class Playlist
{
private:
/**
 *   @brief nome da playlist
 */
    std::string nome;
/**
 *   @brief criando um ponteiro de lista de musicas
 */
    Lista<Musica> *musicas = new Lista<Musica>();
public:
/**
 *  @brief construtor padrao
 *  @param NULL
 */
    Playlist();
/**
 *  @brief construtor recebendo nome
 *  @param string n nome da playlist
 */
    Playlist(std::string n);
/**
 *  @brief construtor recebendo nome e o ponteiro para a lista
 *  @param string n nome da playlist
 *  @param Lista<Musica> *m ponteiro da lista
 */
    Playlist(std::string n, Lista<Musica> *m);
/**
 *  @brief destrutor padrao
 *  @param NULL
 */
    ~Playlist();
/**
 *  @brief setter de nome
 *  @param string n
 */
    void setNome(std::string n);
/**
 *  @brief setter do ponteiro de musicas
 *  @param Lista<Musica> *m ponteiro das listas de musicas
 */
    void setMusicas(Lista<Musica> *m);
/**
 *  @brief adiciona musica na lista
 *  @param Musica m musica adicionada
 */
    void addMusica(Musica m);
/**
 *  @brief deleta musica na lista
 *  @param Musica m musica deletada
 */
    void deleteMusica(Musica m);
    
/**
 *  @brief retorna o nome da playlist
 *  @param NULL
 *  @return string nome da playlist
 */
    std::string getNome();
/**
 *  @brief retorna o ponteiro para uma lista de musicas
 *  @param NULL
 *  @return Lista<Musica>* ponteiro da lista
 */
    Lista<Musica> *getMusicas();
/**
 *  @brief retorna o iterador de uma musica
 *  @param NULL
 *  @return Node<Musica>* ponteiro da musica
 */
    Node<Musica> *buscarMusica(Musica m);



    
};

#endif //PLAYLIST_HPP
