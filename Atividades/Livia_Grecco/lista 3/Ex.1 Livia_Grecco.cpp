/**********************************************************
- Autor:     Livia Grecco
- Descrição: Lista 3 - Ex.1
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
    float fNota1 = 0;
    float fNota2 = 0;
    float fNota3 = 0;
    float fNota4 = 0;
    float fMedia = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
    cout << "Informe a nota 1: ";
    cin >> fNota1;

    cout << "Informe a nota 2: ";
    cin >> fNota2;

    cout << "Informe a nota 3: ";
    cin >> fNota3;

    cout << "Informe a nota 4: ";
    cin >> fNota4;

    // Calculo da média aritmética
    fMedia = (fNota1+fNota2+fNota3+fNota4)/4;

    cout << "Média Aritmética: " << fMedia << endl;

    if ( fMedia >= 7)


    cout << "Aprovado";

    else

    cout << "Reprovado";



    return 0;
}
