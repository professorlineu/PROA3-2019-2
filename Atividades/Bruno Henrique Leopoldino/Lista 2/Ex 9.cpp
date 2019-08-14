/**********************************************************
- Autor:     Bruno Henrique
- Descrição: Desconto
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
    float fBaseMaior=0;
    float fBaseMenor=0;
    float fAltura=0;
    float fArea=0;


    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F5");

    //Código do programa

    cout << "Digite base maior:  ";
    cin >> fBaseMaior;

    cout << "Digite base menor:  ";
    cin  >> fBaseMenor;

    cout << "Digite altura:  ";
    cin >> fAltura;

    fArea = (fBaseMaior + fBaseMenor)*fAltura/2;

    cout << "Sua Aréa é:  " << fArea;


    return 0;
}
