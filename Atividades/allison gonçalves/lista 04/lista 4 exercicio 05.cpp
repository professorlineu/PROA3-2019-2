

/**********************************************************
- Autor: allison g. de almeida
- lista 4 exercicio 05
- Descri��o: fa�a um programa que receba dez n�meros calcule e mostre a soma dos n�meros pares e a sonma dos n�meros primos
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

        cout << "digite um n�mero: "; //receba o valor do n�mero
        cin >> inum;

        i++;

        if (inum % 2 == 0)   //condi�ao para ser par
        {
            isomapares += inum;

        }
        if ()  //condi�ao para ser primo (nao terminei ainda)

    {
        isomaprimos += inum;
    }

    } //fim do while


    cout << "A soma dos n�meros pares �: " << iSomaPares << endl;
    cout << "A soma dos n�meros primos �: " << iSomaPrimos << endl;




        return 0;

}
