/**********************************************************
- Autor:     Adriel Silveira / Elbert Jean
- Descri��o: Jogo da MEGA - v 1.0
**********************************************************/
#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <locale.h>
#include <time.h> // necess�rio para gerar n�mero aleat�rio
#include <windows.h>
#include <fstream>
#include <string>

using namespace std;

void SetColor(int ForgC);

int main()
{
    int iAleatorio = 0; // n�mero gerado pelo computador
    int iNumero = 0; // valor do usu�rio
    int iNivel = 0; // valor do usu�rio
    int i= 0;
    int ii= 0;
    int icont = 0;
    int vet[6] ;
    int vet2[6] ;
    int vet3[6] ;
    int isoma = 0;
    int iescolha = 1;
    string sTexto ;
    string line;


    setlocale(LC_ALL,"");
    system("color F1");




    // evita que o n�mero sorteado seja sempre o mesmo a cada execu��o
    srand(time(NULL));



    while (iescolha == 1)
    {
        SetColor(4);
        cout << " \n     JOGO DA MEGA ALEAT�RIO " << "\n";
        SetColor(0);
        cout <<"\n       TABELA DE PONTUA��O" << endl ;
        cout <<"\nTENTATIVAS \t\t PONTOS";
        cout <<"\n    1 \t\t\t   10";
        cout <<"\n  2 a 3 \t\t   7";
        cout <<"\n  4 a 5 \t\t   5";
        cout <<"\n  6 a 7 \t\t   3";
        cout <<"\n  8 a 9 \t\t   2";
        cout <<"\n   10\t\t\t   1";
        cout << endl ;

         SetColor(4);
         cout << "\n\t    RANKING\n" <<endl;
         SetColor(0);
         //string line;

    ifstream myfile2 ("arquivo.txt");

    if (myfile2.is_open())
    {
        while ( getline (myfile2,line) )
        {
             cout <<"\t    "<< line << '\n' ;
        }
        myfile2.close();
    }

    else
        cout << "Arquivo com problema!";
        cout <<"\nPressione a tecla ENTER para iniciar o jogo";




        while ( i<6 )

        {
            getch();
            system("cls");
            iAleatorio = rand() % 60+ 1;

            icont = 0;

            ++ii;
            cout << endl;
            SetColor(0);
            cout << "\t" << ii <<"� Rodada";

            do

            {
                icont++ ;

                SetColor(1);
                cout << "\nDigite um n�mero de 1 a 60: ";
                cin >> iNumero;

                if (iAleatorio > iNumero)
                {
                    SetColor(4);
                    cout << "  Pense em um n�mero MAIOR!" << endl;
                    SetColor(5);
                }
                else if (iAleatorio < iNumero)
                {
                    SetColor(6);
                    cout << "  Pense em um n�mero MENOR!" << endl;
                    SetColor(5);
                }





                SetColor(0);
                cout << "\t" <<icont <<"� Tentativa" << endl ;

            }


            while (iAleatorio != iNumero);

            SetColor(1);
            cout << "\nO n�mero " << iAleatorio  <<" foi o sorteado nesta rodada" << endl << endl ;

            vet[i] = iAleatorio ;

            vet2[i] = icont ;



            i++;


        } // FIM DO WHILE REPETIDOR

        getch();
        system("cls");

        SetColor(0);
        cout << "\nOs n�meros sorteados neste jogo foram:" <<endl;
        for(i=0; i<6; i++)
        {
            SetColor(1);
            cout << vet[i] << "\t " ;
        }

        cout << "\n" ;

        SetColor(0);
        cout << "\nA quantidade de tentaivas para cada acerto:" <<endl;
        for(i=0; i<6; i++)
        {
            SetColor(1);
            cout << vet2[i] << "\t " ;
        }
        cout << endl;

        for(i=0; i<6; i++)
        {

            if ( vet2[i] == 1)
            {
                isoma = isoma + 10;
            }

            else if ( vet2[i] >=2 && vet2[i] <=3)
            {
                isoma = isoma + 7;
            }

            else if ( vet2[i] >=4 && vet2[i] <=5)
            {
                isoma = isoma + 5;
            }

            else if ( vet2[i] >=6 && vet2[i] <=7)
            {
                isoma = isoma + 3;
            }

            else if ( vet2[i] >=8 && vet2[i] <=9)
            {
                isoma = isoma + 2;
            }

            else
            {
                isoma = isoma + 1;
            }


        } // fim do FOR do vet2

        cout <<"\n\n\t\tVOC� FEZ " << isoma << " PONTOS " << endl;
        cout << endl ;


        getch();
        system("cls");

 ofstream myfile ("arquivo.txt", ios_base::app);


    if (myfile.is_open())
    {
        cout << "\nDigite o seu nome para inserir no ranking ";
       cin>> sTexto;

        myfile << sTexto << " - " << isoma <<"\n";


        myfile.close();
    }
    else
        cout << "Arquivo com problema!";


        system("cls");

        cout << "\n\t\tRANKING\n" <<endl;
         //string line;

    ifstream myfile1 ("arquivo.txt");

    if (myfile1.is_open())
    {
        while ( getline (myfile1,line) )
        {
             cout <<"\t\t"<< line << '\n' ;
        }
        myfile.close();
    }

    else
        cout << "Arquivo com problema!";







        i=0;
        ii = 0;
        isoma = 0;

        getch();


        cout << "\n\t Deseja jogar novamente?";
        cout << "\n\t 1= SIM \t 2= N�O " ;
        cin >> iescolha ;
        system("cls");



    } // while jogar novamente



    cout << "\n\t   OBRIGADO POR JOGAR!\n";


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
