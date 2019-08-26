/**********************************************************
- Autor:     Adalberto Jose
- Descrição:lista3 exercicio 7
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

    cout << "\n Qual é o seu salario?";
    cin>>fsalario;

    if(fsalario<500)

    {
     faumento=fsalario + (fsalario*30/100);
     cout<<"\n Parabens, você merece um aumento!O seu novo salario é de"<<faumento;
    }

     else if (fsalario>=500)
    {
     cout<<"\n Você não tem direito a um aumento!";

    }

    return 0;

    }

