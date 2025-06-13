#include "conta.hpp"
#include <istream>
#include <fstream>
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

void Conta::depositar(float deposito)
{

    saldo += deposito;
    cout << deposito << "Foi depositado com sucesso!";
}

void Conta::saque(float saque)
{
    if (saldo > saque)
    {
        cout << "valor indisponivel para saque";
    }
    else
        saldo -= saque;
    cout << saque << "Foi sacado com sucesso!";
}

void Conta::verSaldo()
{
    cout << "Saldo total: " << saldo;
}

void Conta::lerSaldo()
{
    ifstream saldo("saldo.txt");
    if (saldo.is_open())
    {
        string valor;
        getline(saldo, valor);
        this->saldo = stod(valor);
        cout << "Saldo: " << valor << endl;
        saldo.close();
    }
    else
        cout << "Erro ao abrir arquivo";
}

void Conta::salvarSaldo()
{
    ofstream saldo("saldo.txt");
    if (saldo.is_open())
    {
        saldo << this->saldo;
        saldo.close();
    }
    else
        cout << "Erro ao abrir arquivo";
}

void Conta::verResumo()
{
    cout << "Nome do titular: " << nome << endl;
    cout << "Numero da conta: " << numeroConta << endl;
    cout << "Saldo: " << saldo << endl;
}
