/**********************************************************
- Autor:     Elbert Jean
- Descrição: Faça um programa que mostre as tabuadas dos números de 1 a 10.
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <cmath>
#include <conio.h>


using namespace std;

int main()
{
    int itabuada = 0; //Declaração de variáveis
    int jmult = 0; //Declaração de variáveis
    int iresultado = 0; //Declaração de variáveis

    setlocale(LC_ALL,""); //Configuração da tela de saída
    system("color F1"); // limpa a tela

    while (itabuada <=10) //Código do programa

    {
        cout << "\ntabuada do " << itabuada <<endl;

        while (jmult <=10) //Código do programa

        {

            iresultado = itabuada * jmult;

            cout << itabuada << " x " << jmult << " = " << iresultado << "\n";
            jmult++;

        } // fim do while / laço

        itabuada++;
        jmult = 0;
    }


    return 0;
}
