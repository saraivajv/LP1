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

    friend ostream &operator<<(ostream &stream, const Musica &musica){
        stream << "Musica: " << musica.nome << endl;
        stream << "Artista: " << musica.artista << endl;
        return stream;
    }
    
};

#endif //MUSICA_HPP
