#include <fstream>
using namespace std;

#include "conta.hpp"

int main()
{
    int opcao;
    Conta conta;

    Conta *c1 = new Conta("Teste", 0, 0);

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
            c1->depositar(deposito);
            c1->salvarSaldo();
            break;
        }
        case 2:
        {
            float saque;
            cout << "Valor do saque: ";
            cin >> saque;
            c1->saque(saque);
            
            break;
        }
        case 3:
            c1->lerSaldo();
            break;
        case 4:
            c1->verHistorico();
            break;
        case 5:
            c1->verResumo();
            break;
        case 0:
            break;
        default:
            cout << "Opção inválida";
            break;
        }
    } while (opcao != 0);
}