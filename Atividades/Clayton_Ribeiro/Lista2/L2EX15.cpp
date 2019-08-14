/**********************************************************
- Autor:     Clayton C Ribeiro
- Descrição: Lista 2 - Exercício 15
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main ()
{
    float  f_Salar = 0, f_Conta = 0, f_Saldo = 0;

    setlocale(LC_ALL,"");
    system("color F1");

    cout << "Digite o valor do seu salário: "; // Recebe o valor do salário
    cin >> f_Salar;

    cout << "\nDigite total das contas atrasadas: "; // Recebe o valor total das contas atrasadas
    cin >> f_Conta;

    f_Saldo = f_Salar - f_Conta * 1.02; //Calcula o valor do saldo restante

    cout << "\nSeu saldo após o pagamento das contas será: " << f_Saldo;

	return 0;
}
