

/**********************************************************
- Autor: allison g. de almeida
- lista 4 exercicio 05
- Descrição: faça um programa que receba dez números calcule e mostre a soma dos números pares e a sonma dos números primos
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>


using namespace std;

int main()
{

    int i = 0;
    int inum = 0;
    int isomapares = 0, isomaprimos = 0;

    setlocale( LC_ALL,"");
    system("color F1");

    while (i < 10)
    {

        cout << "digite um número: "; //receba o valor do número
        cin >> inum;

        i++;

        if (inum % 2 == 0)   //condiçao para ser par
        {
            isomapares += inum;

        }
        if ()  //condiçao para ser primo (nao terminei ainda)

    {
        isomaprimos += inum;
    }

    } //fim do while


    cout << "A soma dos números pares é: " << iSomaPares << endl;
    cout << "A soma dos números primos é: " << iSomaPrimos << endl;




        return 0;

}
