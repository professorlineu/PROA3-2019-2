/**********************************************************
- Autor:     Let�cia da Silva Martins
- Descri��o: Exer. 3 Recebe dois n�meros e mostra o menor
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main ()
{
    float fNum1 = 0,
          fNum2 = 0,
          fNum3 = 0,
        fMenor = 0;

    setlocale(LC_ALL,"");
    system("color F1");


    cout << "Digite o primeiro n�mero: ";    // Recebe o valor do primeiro n�mero
    cin >> fNum1;

    cout << "\nDigite o segundo n�mero: ";    // Recebe o valor do segundo n�mero
    cin >> fNum2;

    cout << "\nDigite o terceiro n�mero: ";    // Recebe o valor do terceiro n�mero
    cin >> fNum3;


    if (fNum1 <= fNum2)     //Condi��o para o n�mero 1 ser o menor
    {
        fMenor = fNum1;
    }

    else                    //Condi��o para o n�mero 2 ser o menor
    {
        fMenor = fNum2;
    }

    if  (fNum3 <= fMenor)   //Condi��o para o n�mero 3 ser o menor
    {
        fMenor = fNum3;
    }

    cout << "\nO menor n�mero �: " << fMenor;

	return 0;
}
