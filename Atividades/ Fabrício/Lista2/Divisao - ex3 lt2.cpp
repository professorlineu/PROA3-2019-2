/**********************************************************
- Autor: Fabricio Nunes
- Descri��o: Lista 2 - Exerc�cio 3 - 2 vari�veis de entrada e divis�o dos mesmos n�o podendo dividir por 0
**********************************************************/

#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <cmath>

using namespace std;

int main()
{
    //Declara��o de vari�veis
   float fNum1 = 0;
   float fNum2 = 0;
   float fDivi = 0;


    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa
    cout << "Digite o primeiro n�mero: ";
    cin >> fNum1;

    while (fNum2 == 0)
    {
        cout << "Digite o segundo n�mero: ";
        cin >> fNum2;
    }

    fDivi= fNum1 / fNum2;

    cout << "Resultado final:" << fDivi;


    return 0;
}
