#include<iostream>
#include<string>
#ifndef MUSICA_HPP
#define MUSICA_HPP

/**
 * @file musica.hpp
 * @brief Classe de musica 
 * 
 */

using namespace std;

/**
 * @class Musica musica.hpp "include/musica.hpp" 
 * 
 */
class Musica
{
private:
/**
 * @brief Titulo da musica
 * 
 */
    std::string nome;
/**
 * @brief Nome do autor da musica
 * 
 */
    std::string artista;
public:
/**
 * @brief Construtor default
 * @param NULL
 */
    Musica();
/**
 * @brief Construtor com titulo da musica e nome do artista
 * @param n Nome da musica
 * @param a Nome do artista
 */
    Musica(std::string n, std::string a);
/**
 * @brief Destrutor default
 * @param NULL
 */
    ~Musica();
/**
 * @brief Função que retorna o nome da musica
 * @return nome da musica
 */    
    std::string getNome();
/**
 * @brief Função que retorna o artista
 * @return autor da musica
 */  
    std::string getArtista();
/** @brief Função para configurar o nome da musica
 *  @param artista Nome da musica
*/
    void setNome(std::string n);
/** @brief Função para configurar o nome do artista da musica
 *  @param artista Nome do artista
*/
    void setArtista(std::string a);

/** @brief Sobrecarga do operator << para a classe
 *  @param ostream Stream de saida padrao
 *  @param &musica elemento impresso
 *  @return formatacao da musica
 * 
*/
    friend ostream &operator<<(ostream &stream, const Musica &musica){
        stream << "Musica: " << musica.nome << endl;
        stream << "Artista: " << musica.artista << endl;
        return stream;
    }
/** @brief Sobrecarga do operator == para a classe
 *  @param musica elemento comparado
 *  @param music2 segundo elemento comparado
 *  @return bool indicando o status da comparacao
 * 
*/
    friend bool operator ==(const Musica &musica, const Musica &musica2){
        if(musica.nome == musica2.nome){
            return true;
        }
        return false;
    }
    
};

#endif //MUSICA_HPP
