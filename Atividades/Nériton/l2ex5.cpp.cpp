/**********************************************************
- Autor:   N�riton
- Descri��o: lista 2 exercicio 5
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis

 float fProdInicial = 0;
   float fProdSub = 0;
   float fProdFinal = 0;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa

 cout << "Digite o valor Inicial do Produto:  ";
    cin >> fProdInicial;

    fProdSub = fProdInicial * 0.1;

    fProdFinal = fProdInicial - fProdSub;

    cout << "O valor do seu produto �:  " << fProdFinal << endl;


    return 0;
}
