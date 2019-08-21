/**********************************************************
- Autor:   Nériton
- Descrição: lista 2 exercicio 5
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis

 float fProdInicial = 0;
   float fProdSub = 0;
   float fProdFinal = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa

 cout << "Digite o valor Inicial do Produto:  ";
    cin >> fProdInicial;

    fProdSub = fProdInicial * 0.1;

    fProdFinal = fProdInicial - fProdSub;

    cout << "O valor do seu produto é:  " << fProdFinal << endl;


    return 0;
}
