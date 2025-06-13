#include <fstream>
using namespace std;

#include "conta.hpp"

int main()
{
    int opcao;
    Conta conta;

    Conta *c1 = new Conta("João Pedro",00000,0);

    do
    {
        cout << "\n---MINI BANCO ---\n";
        cout << " 0 - Fechar programa\n";
        cout << " 1 - Depositar\n";
        cout << " 2 - Sacar\n";
        cout << " 3 - Ver saldo\n";
        cout << " 4 - Ver historico\n";
        cout << " 5-  Ver resumo\n";
        cin >> opcao;

        switch (opcao)
        {
        case 1:
        {
            float deposito;
            cout << "Valor do deposito: ";
            cin >> deposito;
            conta.depositar(deposito);
            conta.salvarSaldo();
            break;
        }
        case 2:
        {
            float saque;
            cout << "Valor do saque: ";
            cin >> saque;
            conta.saque(saque);
            conta.salvarSaldo();
        }
        break;
        case 3:
            conta.verSaldo();
            break;
        case 4:
            conta.lerSaldo();
            break;
        case 5:
            conta.verResumo();
            break;
        case 0:
            break;
        default:
            cout << "Opção inválida";
            break;
        }
    } while (opcao != 0);
}