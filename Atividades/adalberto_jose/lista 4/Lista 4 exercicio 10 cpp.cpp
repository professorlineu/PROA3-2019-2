/**********************************************************
- Autor:     Adalberto José
- Descrição: Lista 4 Um programa que receba 10 numeros , calcule e mostre a soma dos numeros pares e a soma dos numeros primos.
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
    int i = 0;
    int inum = 0;
    int isomapares = 0;
    int isomaprimos= 0;


    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
    while (i < 3)
    {
        cout << "\nDigite um numero: ";
        cin >> inum;

        i++;



        if (inum % 2==0)
        {
            isomapares += inum;
        }
        else
         {


        isomaprimos += inum;
         }


    } // fim do while / laço

    cout << "\n Soma dos numeros pares é: " << isomapares << endl;

    cout << "\n A soma dos numeros primos é: " << isomaprimos  << endl;



    return 0;
}
