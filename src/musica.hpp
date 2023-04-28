#include<iostream>
#include<string>
#ifndef MUSICA_HPP
#define MUSICA_HPP
class Musica
{
private:
    std::string nome;
    std::string artista;
public:
    Musica();
    Musica(std::string n, std::string a);

    ~Musica();
    
    std::string getNome();
    std::string getArtista();

    void setArtista(std::string a);
    void setNome(std::string n);
    
};

#endif //MUSICA_HPP
