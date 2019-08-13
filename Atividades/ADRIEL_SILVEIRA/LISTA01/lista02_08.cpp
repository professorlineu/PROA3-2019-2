/**********************************************************
- Autor:     Adriel Silveira
- Descrição: calculo de conversao de peso em kg para gramas
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <conio.h>
using namespace std;

int main()
{
    //Declaração de variáveis


    float fpeso = 0;


    float fpesograma = 0;



    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa

    cout << " \npeso atual em kg: ";
    cin >> fpeso;

fpesograma = fpeso *1000 ;






cout << "\peso em gramas= " <<fpesograma;

getch();

    return 0;
}

