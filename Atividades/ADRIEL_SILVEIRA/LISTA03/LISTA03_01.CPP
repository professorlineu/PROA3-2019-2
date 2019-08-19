/**********************************************************
- Autor:     Adriel Silveira
- Descrição: calculo de media ARITIMETICA de nota final(CONDICAO C)
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <conio.h>
using namespace std;

int main()
{
    //Declaração de variáveis


    float fNOTA1 = 0;
    float fNOTA2 = 0;
    float fNOTA3 = 0;
    float fNOTA4 = 0;

    float fMEDIA = 0;



    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa

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

if (fMEDIA >= 7 ) // CONDIÇÃO "CE"
{
    cout << "\nvoce passou de ano colega, APROVADISSIIIIMOOOOOOOO!!!" ;

}

else // CONDIÇÃO "SENAO"

{ cout << "\nvoce é muito burro, REPROVADO! " ;


}
getch();

    return 0;
}
