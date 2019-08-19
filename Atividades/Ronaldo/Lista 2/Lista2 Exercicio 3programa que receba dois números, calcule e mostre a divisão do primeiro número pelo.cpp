/**********************************************************
- Autor:     Ronaldo Rodrigues
- Descrição: Lista 2 - Exercício 3 - programa que receba dois números, calcule e mostre a divisão do primeiro número pelo
segundo. Sabe-se que o segundo número não pode ser zero, portanto, não é necessário se preocupar
com validações
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis

        int iNumero1  =  0;
        int iNumero2  =  0;
        int iResultado = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa

    cout << "Digite o primeiro número: ";
    cin  >> iNumero1;

    cout << "Digite o segundo número: ";
    cin  >> iNumero2;

    iResultado  = iNumero1  /  iNumero2;

    cout << "Resultado = "  <<  iResultado;

    return 0;
}
