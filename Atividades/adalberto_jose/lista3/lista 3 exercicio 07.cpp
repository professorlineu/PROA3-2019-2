/**********************************************************
- Autor:     Adalberto Jose
- Descri��o:lista3 exercicio 7
**********************************************************/
#include <iostream>
#include <conio.h>
#include <locale.h>
#include <cstdlib>
#include <cmath>
using namespace std;

main()
{
    float fsalario;
    float faumento;

    setlocale(LC_ALL,"");
    system("color F1");

    cout << "\n Qual � o seu salario?";
    cin>>fsalario;

    if(fsalario<500)

    {
     faumento=fsalario + (fsalario*30/100);
     cout<<"\n Parabens, voc� merece um aumento!O seu novo salario � de"<<faumento;
    }

     else if (fsalario>=500)
    {
     cout<<"\n Voc� n�o tem direito a um aumento!";

    }

    return 0;

    }

