/**********************************************************
- Autor:     Lineu Lima
- Descri��o: Comando switch com n�meros
**********************************************************/
#include <iostream>
#include <conio.h>
#include <locale.h>
#include <cstdlib>
#include <cmath>
using namespace std;

main()
{
    float fsalario = 0;
    float faumento = 0;

    setlocale(LC_ALL,"");
    system("color F1");

    cout <<" \nQual e o seu salario?";
    cin>>fsalario;

    if (fsalario<=300)
    {
    faumento = fsalario + (fsalario*35/100);
    cout<<"\nParabens voce recebeu um aumento de 35 %! O seu novo salario � de "<<faumento<<"freais";
    }

    else if (fsalario>30)
      {


      faumento = fsalario+(fsalario*15/100);
     cout<<"\nParabens voce recebeu um aumento de 15 %!O seu novo salario � de "<<faumento<<"reais";

        }







  return 0;
}
