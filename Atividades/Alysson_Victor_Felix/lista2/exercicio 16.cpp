/**********************************************************
- Autor:     Alysson Victor Felix
- Descri��o: Exercicio Proposto 16
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <cmath>

using namespace std;

int main()
{
    //Declara��o de vari�veis
    float fcatop = 0;
    float fcatadja = 0;
    float fhipot = 0;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa
    cout << "O valor do cateto Oposto �: ";
    cin >> fcatop;

    cout << "O valor do cateto adjacente �: ";
    cin >> fcatadja;

    fhipot = sqrt (fcatop*fcatop + fcatadja*fcatadja);

    cout << "O valor da hipotenusa �: " << fhipot;



    return 0;
}
