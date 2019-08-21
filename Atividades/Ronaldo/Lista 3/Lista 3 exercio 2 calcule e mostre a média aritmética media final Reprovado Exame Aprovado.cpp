/**********************************************************
- Autor:     Ronaldo Rodrigues
- Descrição: calcule e mostre a média aritmética media final Reprovado Exame Aprovado
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


    float fMEDIA = 0;



    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa

    cout << " \nNOTA PROVA 1: ";
    cin >> fNOTA1;

cout << " \nNOTA PROVA 2: ";
    cin >> fNOTA2;





    fMEDIA = ((fNOTA1 + fNOTA2 ) /2 ) ;

cout << "\nMedia aritmetica final = " <<fMEDIA;

if (fMEDIA >= 7 ) // CONDIÇÃO "CE"
{
    cout << "\nAPROVADO COM LOUVOR!!!" ;

}

else if (fMEDIA > 3 )
{
    cout << "\nEXAME" ;
}

else // CONDIÇÃO "SENAO"

{ cout << "\nSe esforce mais, REPROVADO! " ;


}
getch();

    return 0;
}
