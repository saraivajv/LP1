#include<iostream>
#include<string>
#include"musica.hpp"
#include"lista.hpp"
#include"playlist.hpp"
#include"menu.hpp"

using namespace std;

int main()
{
    Lista<Musica*> musicas;
    Lista<Playlist*> playlists;
    
    Playlist play1("Misturadas");
    Playlist play2("MPB");

    Musica mus1("Believer", "Imagine Dragons");
    Musica mus2("Applause", "Lady Gaga");
    Musica mus3("Quer voar", "Matue");
    Musica mus4("Relicario", "Nando Reis");
    Musica mus5("Avohai", "Ze Ramalho");
    Musica mus6("Agua de Março", "Tom Jobim");

    playlists.addFront(&play1);
    playlists.addBack(&play2);
    musicas.addFront(&mus1);
    musicas.addBack(&mus2);
    musicas.addBack(&mus3);

    playlists.Buscar(&play1)->getData()->addMusica(mus1);
    playlists.Buscar(&play1)->getData()->addMusica(mus2);
    playlists.Buscar(&play1)->getData()->addMusica(mus3);

    playlists.Buscar(&play2)->getData()->addMusica(mus6);
    playlists.Buscar(&play2)->getData()->addMusica(mus5);
    playlists.Buscar(&play2)->getData()->addMusica(mus4);

    menu(musicas, playlists);
    
}