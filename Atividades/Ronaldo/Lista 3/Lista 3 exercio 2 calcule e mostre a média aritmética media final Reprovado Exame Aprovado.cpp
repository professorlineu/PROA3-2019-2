/**********************************************************
- Autor:     Ronaldo Rodrigues
- Descri��o: calcule e mostre a m�dia aritm�tica media final Reprovado Exame Aprovado
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <conio.h>
using namespace std;

int main()
{
    //Declara��o de vari�veis


    float fNOTA1 = 0;
    float fNOTA2 = 0;


    float fMEDIA = 0;



    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa

    cout << " \nNOTA PROVA 1: ";
    cin >> fNOTA1;

cout << " \nNOTA PROVA 2: ";
    cin >> fNOTA2;





    fMEDIA = ((fNOTA1 + fNOTA2 ) /2 ) ;

cout << "\nMedia aritmetica final = " <<fMEDIA;

if (fMEDIA >= 7 ) // CONDI��O "CE"
{
    cout << "\nAPROVADO COM LOUVOR!!!" ;

}

else if (fMEDIA > 3 )
{
    cout << "\nEXAME" ;
}

else // CONDI��O "SENAO"

{ cout << "\nSe esforce mais, REPROVADO! " ;


}
getch();

    return 0;
}
