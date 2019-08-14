/**********************************************************
- Autor:     Jader Oliveira
- Descrição: Lista 2 EX7
**********************************************************/

#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
   float fPeso = 0;
   float fGor = 0;
   float fMag = 0;

   setlocale(LC_ALL,"");
   system("color F2");

   cout << "digite seu peso: ";
   cin >> fPeso;

   fGor = fPeso + (fPeso*0.15);
   fMag = fPeso - (fPeso*0.2);

   cout << "se voce ganhar 15% de peso: " << fGor;
   cout << "\nse voce perder 20% de peso: " << fMag;
}
