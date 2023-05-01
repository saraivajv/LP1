#include<iostream>
#include<string>
#include"musica.hpp"
#include"lista.hpp"

using namespace std;

int main()
{
    Musica *m = new Musica("Believer", "Imagine Dragons");
    Musica *m2 = new Musica("Applause", "Lady Gaga");
    Musica *m3 = new Musica("Quer voar", "Matue");

    Lista<Musica*> listinha;

    listinha.addFront(m);
    listinha.addBack(m2);
    listinha.addBack(m3);

    
}