/**********************************************************
- Autor:     N�riton
- Descri��o: Lista 2 - Exerc�cio 18
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main ()
{
    float  f_TempCel = 0, f_TempFar = 0;

    setlocale(LC_ALL,"");
    system("color F1");

    cout << "Digite o valor da temperatura em Celsius: "; // Recebe o valor da temperatura em Celsius
    cin >> f_TempCel;

    f_TempFar = 1.8 * f_TempCel + 32; //Calcula o valor da temperatura em Fahrenheit. Obs. A f�rmula do livro est� errada

    cout << "\nA temperatura em Fahrenheit �: " << f_TempFar;

	return 0;
}
