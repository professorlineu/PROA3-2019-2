/**********************************************************
- Autor:     Ronaldo Rodrigues
- Descri��o: calculo de media ARITIMETICA de nota final Aprovado ou reprovado media 7
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
    float fNOTA3 = 0;
    float fNOTA4 = 0;

    float fMEDIA = 0;



    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa

    cout << " \nNOTA PROVA 1: ";
    cin >> fNOTA1;

cout << " \nNOTA PROVA 2: ";
    cin >> fNOTA2;

cout << " \nNOTA PROVA 3: ";
    cin >> fNOTA3;

cout << " \nNOTA PROVA 4: ";
    cin >> fNOTA4;



    fMEDIA = ((fNOTA1 + fNOTA2 + fNOTA3 + fNOTA4) /4 ) ;

cout << "\nMedia aritmetica final = " <<fMEDIA;

if (fMEDIA >= 7 ) // CONDI��O "CE"
{
    cout << "\nParab�ns, APROVADO COM LOUVOR!!!" ;

}

else // CONDI��O "SENAO"

{ cout << "\nSe esforce mais, REPROVADO! " ;


}
getch();

    return 0;
}
