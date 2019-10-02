/**********************************************************
- Autor:     Lineu Lima
- Descri��o: Jogo Digital - v 4.0
**********************************************************/
#include <iostream>
#include <cstdlib>
#include <locale.h>
#include <time.h> // necess�rio para gerar n�mero aleat�rio
#include <windows.h>
using namespace std;

void SetColor(int ForgC);

int main()
{
    int iAleatorio = 0; // n�mero gerado pelo computador
    int iNumero = 0; // valor do usu�rio
    int iNivel = 0; // valor do usu�rio
    int i= 1;


    setlocale(LC_ALL,"");
    system("color F1");


    // evita que o n�mero sorteado seja sempre o mesmo a cada execu��o
    srand(time(NULL));



    while ( i<=6 )

    {
        iAleatorio = rand() % 6+ 1;



        do

        {
            SetColor(4);
            cout << "\nDigite um n�mero de 1 a 6: ";
            cin >> iNumero;

            if (iAleatorio > iNumero)
            {
                SetColor(7);
                cout << "Pensei em um n�mero MAIOR!" << endl;
                SetColor(4);
            }
            else if (iAleatorio < iNumero)
            {
                SetColor(7);
                cout << "Pensei em um n�mero MENOR!" << endl;
                SetColor(4);
            } // fim do else
            else
            {
                cout << "\nParab�ns, voc� acertou!" ;

            }

        } // fim do la�o

        while (iAleatorio != iNumero);

        cout << "\no valor � :" << iAleatorio <<endl ;

        i++;
    }





} // fim do main






void SetColor(int ForgC)
{
    WORD wColor;
    //We will need this handle to get the current background attribute
    HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO csbi;

    //We use csbi for the wAttributes word.
    if(GetConsoleScreenBufferInfo(hStdOut, &csbi))
    {
        //Mask out all but the background attribute, and add in the forgournd color
        wColor = (csbi.wAttributes & 0xF0) + (ForgC & 0x0F);
        SetConsoleTextAttribute(hStdOut, wColor);
    }
    return;
}
