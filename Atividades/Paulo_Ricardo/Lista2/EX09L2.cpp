/**********************************************************
- Autor:    Paulo Ricardo
- Descri��o: Exerc�cio 9 lista 2
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis
    int baseM = 0 ;
    int basem = 0 ;
    int alt = 0 ;
    int resu = 0 ;

    cout << " \ n �rea fazer Trapesio " ;

    cout << " \ n Digite uma base maior do trap�zio: " ;
    cin >> baseM;

    cout << " \ n Digite uma base menor do trap�zio: " ;
    cin >> basem;

    cout << " \ n Digite a altura: " ;
    cin >> alt;

    resu = ((baseM + basem) * alt) / 2 ;

    cout << " \ n Uma �rea do trap�zio e: " << resu;




    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa



    return 0;
}
