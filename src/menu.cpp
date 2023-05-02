#include<iostream>
#include<string>
#include"lista.hpp"
#include"playlist.hpp"
#include"menu.hpp"

using namespace std;

    void menu(Lista<Musica*> dbMusicas, Lista<Playlist*> dbPlaylists)
{
    while(true)
    {

        int aux = 0;
        string entrada;

        cout << "\nMenu\n";
        cout << "1 -> Ver Musicas\n2 -> Ver Playlists\n3 -> Ver Musicas em Playlists\n4 -> Tocar musicas\n5 -> Sair\n";
        cout << "Digite um numero";
        getline(cin, entrada);
        aux = stoi(entrada);

        switch(aux)
        {
            case 1: 
                mMusica(dbMusicas, dbPlaylists);
                break;
            case 2:
                mPlaylist(dbMusicas, dbPlaylists);
            case 3:
                mMusicaPlaylist(dbMusicas, dbPlaylists);
            case 4:
                tocarMusica(dbMusicas, dbPlaylists);
            case 5:
                return;
        }

    }

}

    void mMusica(Lista<Musica*> dbMusicas, Lista<Playlist*> dbPlaylists)
{
    while(true)
    {

        int aux = 0;
        string entrada, linha;
        Musica m;

        cout << "\nMenu de Musicas\n";
        cout << "1 -> Add Musicas\n2 -> Remover Musicas\n3 -> Listar Musicas\n4 -> Sair\n";
        cout << "Digite um numero";
        getline(cin, entrada);
        aux = stoi(entrada);

        switch(aux)
        {
            case 1: 
                cout << "Digite o nome da música: ";
                getline(cin, linha);
                m.setNome(linha);

                cout << "Digite o nome do artista: ";
                getline(cin, linha);
                m.setArtista(linha);

                if(dbMusicas.Buscar(&m) != nullptr){
                    cout << "\nMusica ja existe\n";
                    break;
                }

                dbMusicas.addFront(&m);
                cout << "\nOperação realizada\n";


                break;

            case 2:
                cout << "Digite o nome da música: ";
                getline(cin, linha);
                if(dbMusicas.Buscar(&m) == nullptr){
                    cout << "\nMusica nao encontrada\n";
                    break;
                }
                Node<Musica*> *n;

                n = dbMusicas.Buscar(&m);
                dbMusicas.removeNode(n->getData());
                cout << "\nOperação realizada\n";

                break;
            case 3:
                listarMusicas(dbMusicas);
                break;
            case 4:
                return;
        }

    }

}

    void mPlaylist(Lista<Musica*> dbMusicas, Lista<Playlist*> dbPlaylists)
{
    while(true){
        int aux = 0;
        string entrada, linha;
        Playlist p;

        cout << "\nMenu de Playlists\n";
        cout << "1 -> Add Playlists\n2 -> Remover Playlists\n3 -> Listar Playlists\n4 -> Ver Musicas de Playlists\n5 -> Sair\n";
        cout << "Digite um numero";
        getline(cin, entrada);
        aux = stoi(entrada);

        switch(aux)
        {
            case 1: 
                cout << "Digite o nome da playlist: ";
                getline(cin, linha);
                p.setNome(linha);

                if(dbPlaylists.Buscar(&p) != nullptr){
                    cout << "\nPlaylist ja existe\n";
                    break;
                }

                dbPlaylists.addFront(&p);
                cout << "\nOperação realizada\n";


                break;

            case 2:
                cout << "Digite o nome da playlist: ";
                getline(cin, linha);
                if(dbPlaylists.Buscar(&p) == nullptr){
                    cout << "\nPlaylist nao encontrada\n";
                    break;
                }
                Node<Playlist*> *k;

                k = dbPlaylists.Buscar(&p);
                dbPlaylists.removeNode(k->getData());
                cout << "\nOperação realizada\n";

                break;
            case 3:
                listarPlaylists(dbPlaylists);
                break;
            case 4:
                mMusicaPlaylist(dbMusicas, dbPlaylists);
                break;
            case 5:
                return;
        }
    }
    
}

    void listarMusicas(Lista<Musica*> dbMusicas)
{
    int n;
    cout << "\nLista de Musicas\n";

    dbMusicas.printLista();
    cout << endl;

    return;
}

    void listarPlaylists(Lista<Playlist*> dbPlaylists)
{
    int n;
    cout << "\nLista de Playlists\n";

    dbPlaylists.printLista();
    cout << endl;

    return;
}

    void mMusicaPlaylist(Lista<Musica*> dbMusicas, Lista<Playlist*> dbPlaylists)
{
    while(true){
        int aux = 0;
        int aux2 = 0;
        string entrada, linha, nome;
        Playlist p;
        Node<Playlist*> *k;
        Node<Musica*> mus;
        bool saida;

        listarPlaylists(dbPlaylists);

        cout << "\nDigite o nome da playlist\n";
        getline(cin, entrada);
        k = dbPlaylists.Buscar(&p);

        if(k->getData()->getNome() == entrada){
            while(!saida){

                cout << "\nMenu da Playlist: " << k->getData()->getNome() << endl;
                cout << "1 - Add Musicas\n2 - Remover Musicas\n3 - Ver Musicas\n4 - Sair\n";
                cout << "Digite um numero";
                getline(cin, linha);
                aux = stoi(linha);
            }
        }
        dbPlaylists.removeNode(k->getData());
        
        cout << "1 -> Add Playlists\n2 -> Remover Playlists\n3 -> Listar Playlists\n4 -> Ver Musicas de Playlists\n5 -> Sair\n";
        cout << "Digite um numero";
        getline(cin, entrada);
        aux = stoi(entrada);

        switch(aux)
        {
            case 1: 
                cout << "Digite o nome da playlist: ";
                getline(cin, linha);
                p.setNome(linha);

                if(dbPlaylists.Buscar(&p) != nullptr){
                    cout << "\nPlaylist ja existe\n";
                    break;
                }

                dbPlaylists.addFront(&p);
                cout << "\nOperação realizada\n";


                break;

            case 2:
                cout << "Digite o nome da playlist: ";
                getline(cin, linha);
                if(dbPlaylists.Buscar(&p) == nullptr){
                    cout << "\nPlaylist nao encontrada\n";
                    break;
                }
                Node<Playlist*> *k;

                k = dbPlaylists.Buscar(&p);
                dbPlaylists.removeNode(k->getData());
                cout << "\nOperação realizada\n";

                break;
            case 3:
                listarPlaylists(dbPlaylists);
                break;
            case 4:
                mMusicaPlaylist(dbMusicas, dbPlaylists);
                break;
            case 5:
                return;
        }
    }
    
}

    void tocarMusica(Lista<Musica*> dbMusicas, Lista<Playlist*> dbPlaylists)
{
    while(true)
    {

        listarPlaylists(dbPlaylists);

        int aux = 0;
        string entrada, linha;
        Node<Playlist*> *k;
        Playlist p;
        bool saida;

        cout << "\nDigite o nome da playlist\n";
        getline(cin, entrada);
        k = dbPlaylists.Buscar(&p);

        if(k->getData()->getNome() == entrada){
            while(!saida){

                k->getData()->getMusicas()->printLista();
                cout << "Para sair digite 9";
                getline(cin, entrada);
                aux = stoi(entrada);

                if(aux == 9){
                    saida = true;
                    return;
                }

            }
        }
    }
}





