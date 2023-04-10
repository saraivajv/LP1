#include<iostream>
#include<string>
#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP
class Funcionario
{
private:
    string nome;
    double salario;
    string departamento;
public:
    Funcionario(string n, double s, string d);
    
};

#endif //FUNCIONARIO_HPP
