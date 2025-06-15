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
    cout << deposito << " Foi depositado com sucesso!";
    salvarSaldo();
    salvarHistorico("Deposito de R$ " + to_string(deposito) + " Saldo atual: R$ " + to_string(saldo));
}

void Conta::saque(float saque)
{
    if (saldo < saque)
    {
        cout << " valor indisponivel para saque" << endl;
    }
    else
    {
        saldo -= saque;
        cout << saque << " Foi sacado com sucesso!" << endl;
        salvarSaldo();
        salvarHistorico("Saque de R$ " + to_string(saque) + " Saldo atual: R$ " + to_string(saldo));
    }
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

void Conta::verHistorico()
{
    ifstream historico("historico.txt");
    if (historico.is_open())
    {
        string linha;
        cout << "Historico da conta " << endl;
        while (getline(historico, linha))
        {
            cout << linha << endl;
        }
        historico.close();
    }
    else
    {
        cout << "Nenhum historico encontrado.";
    }
}

void Conta::salvarHistorico(string operacao)
{
    ofstream historico("historico.txt", ios::app);
    if (historico.is_open())
    {
        historico << operacao << endl;
        historico.close();
    }
}

void Conta::verResumo()
{
    cout << "Nome do titular: " << nome << endl;
    cout << "Numero da conta: " << numeroConta << endl;
    cout << "Saldo: " << saldo << endl;
}
