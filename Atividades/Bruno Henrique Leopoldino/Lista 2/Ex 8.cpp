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
    float fPesoKG=0;
    float fPesoGramas=0;


    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa

    cout << "Digite seu peso em Kg:  ";
    cin >> fPesoKG;

    fPesoGramas= fPesoKG * 1000;

    cout << "Seu peso em gramas é:  " << fPesoGramas;


    return 0;
}
