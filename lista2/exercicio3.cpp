/**********************************************************
- Autor:     ALYSSON VICTOR FELIX
- Descri��o: exercicios propostos - exerc�cio 3
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;


int main()
{
    //Declara��o de vari�veis
    int A1 = 0;
    int A2 = 0;
    int Dividi = 0;

     setlocale(LC_ALL,"");
    system("color F1");

    cout << "Inserir o valor do primeiro numero: ";
    cin >> A1;

    cout << "Inserir o valor do segundo numero";
    cin >> A2;

    Dividi = A1 / A2;

    cout << "O resultado da sua divisao �: " <<Dividi;








    return 0;
}
