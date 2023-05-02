#include<iostream>
#include<string>

/**
 * @file menu.hpp
 * @brief menus para o usuario
 * 
 */
#include"playlist.hpp"
#include"lista.hpp"
#ifndef MENU_HPP
#define MENU_HPP


/**
 * @brief menu inicial dos usuarios
 * @param dbMusicas base de dados de musicas
 * @param dbPlaylists base de dados de playlists
 */
void menu(Lista<Musica*> dbMusicas, Lista<Playlist*> dbPlaylists);
/**
 * @brief menu das musicas
 * @param dbMusicas base de dados de musicas
 * @param dbPlaylists base de dados de playlists
 */
void mMusica(Lista<Musica*> dbMusicas, Lista<Playlist*> dbPlaylists);
/**
 * @brief menu das playlists
 * @param dbMusicas base de dados de musicas
 * @param dbPlaylists base de dados de playlists
 */
void mPlaylist(Lista<Musica*> dbMusicas, Lista<Playlist*> dbPlaylists);
void mMusica(Lista<Musica*> dbMusicas, Lista<Playlist*> dbPlaylists);
/**
 * @brief menu das musicas nas playlists
 * @param dbMusicas base de dados de musicas
 * @param dbPlaylists base de dados de playlists
 */
void mMusicaPlaylist(Lista<Musica*> dbMusicas, Lista<Playlist*> dbPlaylists);
void mMusica(Lista<Musica*> dbMusicas, Lista<Playlist*> dbPlaylists);
/**
 * @brief menu das musicas a serem tocadas
 * @param dbMusicas base de dados de musicas
 * @param dbPlaylists base de dados de playlists
 */
void tocarMusica(Lista<Musica*> dbMusicas, Lista<Playlist*> dbPlaylists);
void mMusica(Lista<Musica*> dbMusicas, Lista<Playlist*> dbPlaylists);
/**
 * @brief listagem das musicas
 * @param dbMusicas base de dados de musicas
 */
void listarMusicas(Lista<Musica*> dbMusicas);
/**
 * @brief listagem das playlists
 * @param dbMusicas base de dados de playlists
 */
void listarPlaylists(Lista<Playlist*> dbPlaylists);


#endif //MENU_HPP
