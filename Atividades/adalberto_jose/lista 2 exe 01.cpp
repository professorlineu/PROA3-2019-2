/**********************************************************
- Autor:     Adalberto Jos�
- Descri��o: Lista 2 Exercicio 1
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis
    int iAnoAtual = 0;
    int iAnoNasc = 0;
    int iResultado = 0;


    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa
    cout << "Digite o ano atual: ";
    cin >> iAnoAtual;

    cout << "Digite o ano de nascimento: ";
    cin >> iAnoNasc;

    iResultado = iAnoAtual - iAnoNasc;

    cout << "Sua idade �: " << iResultado;


    return 0;
}
