/**********************************************************
- Autor:     Adalberto Jos�
- Descri��o: Lista 4 Um programa que receba 10 numeros , calcule e mostre a soma dos numeros pares e a soma dos numeros primos.
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis
    int i = 0;
    int inum = 0;
    int isomapares = 0;
    int isomaprimos= 0;


    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa
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


    } // fim do while / la�o

    cout << "\n Soma dos numeros pares �: " << isomapares << endl;

    cout << "\n A soma dos numeros primos �: " << isomaprimos  << endl;



    return 0;
}
