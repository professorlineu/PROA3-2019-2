/**********************************************************
- Autor:     Alysson Victor Felix
- Descrição: Exercicio Proposto 16
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <cmath>

using namespace std;

int main()
{
    //Declaração de variáveis
    float fcatop = 0;
    float fcatadja = 0;
    float fhipot = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
    cout << "O valor do cateto Oposto é: ";
    cin >> fcatop;

    cout << "O valor do cateto adjacente é: ";
    cin >> fcatadja;

    fhipot = sqrt (fcatop*fcatop + fcatadja*fcatadja);

    cout << "O valor da hipotenusa é: " << fhipot;



    return 0;
}
