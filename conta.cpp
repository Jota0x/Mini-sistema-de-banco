#include "conta.hpp"
#include <istream>
using namespace std;

void Conta::setNome()
{
    this->nome = nome;
}

string Conta::getNome()
{
    return this->nome = nome;
}

void Conta::setNumeroConta()
{
    this->numeroConta = numeroConta;
}

int Conta::getNumeroConta()
{
    return this->numeroConta = numeroConta;
}

void Conta::setSaldo()
{
    this->saldo = saldo;
}

float Conta::getSaldo()
{
    return this->saldo = saldo;
}
