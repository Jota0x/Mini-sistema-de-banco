#include <iostream>
using namespace std;

class Conta
{
private:
    string nome;
    int numeroConta;
    float saldo;

public:
    // construtor vazio
    Conta() {}

    // cosntrutor com parametros
    Conta(string nome, int numeroConta, float saldo)
    {
        setConta(nome, numeroConta, saldo);
    }

    void setConta(string nome, int numeroConta, float saldo)
    {
        this->nome = nome;
        this->numeroConta = numeroConta;
        this->saldo = saldo;
    }

    void setNome();
    string getNome();
    void setNumeroConta();
    int getNumeroConta();
    void setSaldo();
    float getSaldo();
};
