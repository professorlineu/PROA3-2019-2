/**********************************************************
- Autor:   Livia Grecco
- Descri��o: Lista 4 - Ex. 6
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <conio.h>
#include <cmath>

using namespace std;

int main()
{
   //Declara��o de vari�veis
   int i = 0;
   float fValor = 0;
   float fSoma = 0;
   float fParce = 0;
   float fPrazo = 0;
   float fTotal = 0;
   char cTipo;



    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");


    //C�digo do programa


    while (i < 3)
    {
    cout << "Digite o valor da compra: ";
    cin >> fValor;

    cout << "Digite a forma de pagamento: ";
    cin >> cTipo;


   if (cTipo == 'p')
   {
       fPrazo = fPrazo + fValor;
   }

   else
   {
        fSoma = fSoma + fValor;
   }

    i++;
    }

    cout << "Valor total a vista das compras: " << fSoma << endl;

    cout << "Valor total a prazo das compras ficou: " << fPrazo << endl;

    fTotal = fSoma + fPrazo;

    cout << "Valor total das compras: " << fTotal << endl;

    fParce = fPrazo/3;

    cout << "Valor de cada parcela: " << fParce << endl;


    return 0;
}
