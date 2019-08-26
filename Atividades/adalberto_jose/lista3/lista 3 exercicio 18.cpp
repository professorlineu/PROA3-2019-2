/**********************************************************
- Autor:     Adalberto Jose
- Descrição:lista3 exercicio 18
**********************************************************/
#include <iostream>
#include <conio.h>
#include <locale.h>
#include <cstdlib>
#include <cmath>
using namespace std;

main()
{
    float fidade;

    setlocale(LC_ALL,"");
    system("color F1");

    cout << "\n Qual a sua idade?";
    cin>>fidade;

    if(fidade>=18)

    {
     cout<<"\n Você é de maior!";

    }

     else
    {
     cout<<"\n Você é de menor!";

    }

    return 0;

    }

