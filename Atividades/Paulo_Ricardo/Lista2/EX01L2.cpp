/**********************************************************
- Autor:     Paulo Ricardo
- Descrição: Faça um programa que receba dois números, calcule e mostre a divisão do primeiro número pelo
segundo. Sabe-se que o segundo número não pode ser zero, portanto, não é necessário se preocupar
com validações.
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
    int n1= 0;
    int n2= 0;
    int res= 0;

    cout << "\n Divisão";

    cout << "\n Digite um numero";
    cin  >> n1;

    cout << "Digite um numero maior que 0";
    cin >> n2;

    res= n1/n2;

    cout << "\n =" << res;




    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa



    return 0;
}
