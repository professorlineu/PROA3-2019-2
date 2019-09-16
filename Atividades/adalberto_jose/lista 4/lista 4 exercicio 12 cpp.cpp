/**********************************************************
- Autor:     Adalberto José
- Descrição: Lista Exercicio
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    int i = 0;
    int inum = 0;

    int itesteprimo = 0;
    int icontaprimo = 0;
    int icontadivprimo = 0;





    setlocale(LC_ALL,"");
    system("color F1");

    while (i<10)
    {
        cout<<"\nDigite um numero:";
        cin>>inum;

        i++;

        itesteprimo = inum;
        while (itesteprimo<=inum && itesteprimo>= 1)
        {
            if (inum %itesteprimo==0)
            {
                icontadivprimo++;
            }
            itesteprimo--;
        }

        if (icontadivprimo==2)
        {
            icontaprimo++;
        }
        icontadivprimo = 0;


    }//fim do while
    cout<<"Quantidades de numeros primos é:"<<icontaprimo<<endl;

    return 0;
}
