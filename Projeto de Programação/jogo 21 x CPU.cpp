/**********************************************************
Autor:allison gon�alve de almeida
**********************************************************/

#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <time.h>
using namespace std;

int main()
{
    int inumero1 = 0;
    int inumero2 = 0;
    int inumero3 = 0;
    // int inumero4 = 0;
    float fresultado = 0;
    int iAleatorio;
    char cOpcao;

    setlocale(LC_ALL,"");
    system("color F1");

    srand(time(NULL)); //Evita que o n�mero sorteado seja sempre o mesmo a cada execu��o



    do
    {
        system("cls");

        iAleatorio = rand() % 9 + 1; //Gera um n�mero aleat�rio


        //Declara��o de vari�veis


        inumero1 = inumero1 + iAleatorio;

        cout<<"numero sorteado foi: " << inumero1 <<endl;



        cout << "\n\nDeseja jogar novamente S/N: "<< endl;
        cin >> cOpcao;

    }
    while (cOpcao == 's');


    if (inumero1 == 21 )
    {

        cout << " parabens voc� ganhou 2 pontos "<< endl;

    }

    else  if (inumero1 < 21 )
    {
        cout << " parabens voc� ganhou 1 ponto "<< endl;



    }
    else
    {
        cout <<" infelismente voce perdeu, tente novamente " << endl;
    }
    return 0;


}











