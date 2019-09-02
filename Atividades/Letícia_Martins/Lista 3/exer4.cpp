/**********************************************************
- Autor:      Letícia da Silva Martins
- Descrição: Exer. 4 Recebe dois números e mostra o menor
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main ()
{
    float fNum1 = 0,
          fNum2 = 0,
          fMenor = 0;

    setlocale(LC_ALL,"");
    system("color F1");


    cout << "Digite o primeiro número: ";    // Recebe o valor do primeiro número
    cin >> fNum1;

    cout << "\nDigite o segundo número: ";    // Recebe o valor do segundo número
    cin >> fNum2;


    if (fNum1 <= fNum2)     //Condição para o número 1 ser o menor
    {
        fMenor = fNum1;
    }

    else                    //Condição para o número 2 ser o menor
    {
        fMenor = fNum2;
    }

    if  (fNum2 <= fMenor)   //Condição para o número 3 ser o menor
    {
        fMenor = fNum2;
    }

    cout << "\nO menor número é: " << fMenor;

	return 0;
}

