/**********************************************************
- Autor:     Robson Torres
- Descri��o: Exercicio 08 Lista 2
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis

           float  f_PesoKg = 0, f_Pesog = 0;


    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa

    cout << "digite o peso em quilos: ";    // Recebe o valor de massa em quilogramas
    cin >> f_PesoKg;

      f_Pesog = f_PesoKg * 1000; //Calcula o valor da massa em gramas


      cout << "\nO peso em gramas �: " << f_Pesog;



    return 0;
}

