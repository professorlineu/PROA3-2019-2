/**********************************************************
- Autor:     Gerson Flores de Souza
- Descrição: lista 2 exercicio 1
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
    int num001=0;
    int num002=0;
    int sub=0;


    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
    cout << "digite o primeiro número" << endl;
    cin>> num001;
    cout << "digite o segundo número" << endl;
    cin>> num002;

    sub = num001 - num002;

    cout << "resultado" << endl;
    cout << "\n" << sub;




    return 0;
}
