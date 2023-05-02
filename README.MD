# Projeto 1 de LP1 (Criação de menu de músicas)
Projeto de um menu de músicas em C++ que permite a interação do usuário com o sistema.

## Funcionalidades
* Listar músicas disponíveis
* Listar playlists disponíveis
* Armazenar músicas em playlists
* Criar novas playlists
* Criar novas músicas
* Remover músicas
* Remover playlists
* Reproduzir música de uma playlist
* Listar músicas de uma playlist (Incompleto)

## Documentação
Documentação feita com Doxygen, enviando arquivos .tex e .html.

## Compilação
### <em>Executando com GCC</em>
<ol>
<li> Clone o seguinte repositório

    git clone https://github.com/saraivajv/LP1.git --branch main --single-branch master
    
<li> Abra o terminal na pasta clonada e digite

    g++ -o master main.cpp menu.cpp musica.cpp playlist.cpp node.cpp
    
<li> Agora execute com

    ./master

</ol>

### <em>Executando com CMake</em>

<ol>
<li> Clone o seguinte repositório

    git clone https://github.com/saraivajv/LP1.git --branch main --single-branch master
    
<li> Abra o terminal na pasta clonada e digite

    mkdir build
    cd build
    
<li> Execute o CMake

    cmake ..
    
<li> Compile com

    make
    
<li> Por fim, execute

    ./master

</ol>

## Dificuldades
Não estava conseguindo adicionar e remover valores de uma lista com o problema de "undefined reference", apesar de todo resto estar rodando sem problemas.

## Aluno
* João Victor Gonçalves de Albuquerque Saraiva