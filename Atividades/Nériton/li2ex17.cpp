/**********************************************************
- Autor:     N�riton
- Descri��o: Lista 2 - Exerc�cio 17
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <cmath>

using namespace std;

int main ()
{
    float  f_Raio = 0, f_Comp = 0, f_Area = 0, f_Vol = 0;

    setlocale(LC_ALL,"");
    system("color F1");

    cout << "Digite o raio da esfera: "; // Recebe o valor do raio da esfera
    cin >> f_Raio;

    f_Comp = 2 * M_PI * f_Raio; //Calcula o valor do comprimento da circunfer�ncia da esfera
    f_Area = M_PI * f_Raio * f_Raio; //Calcula o valor da �rea transversal da esfera
    f_Vol = 3 * M_PI * pow(f_Raio,3.0) / 4; //Calcula o valor o volume da esfera

    cout << "\nO comprimento da circunfer�ncia da esfera �: " << f_Comp;
    cout << "\nA da �rea transversal da esfera �: " << f_Area;
    cout << "\nO volume da esfera: " << f_Vol;

	return 0;
}
