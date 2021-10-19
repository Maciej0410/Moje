#include <iostream>
#include <conio.h>

using namespace std;

void Zakanczacz(); // funkcja zakanczajaca program
void Haslo(); // funkcja wczytujaca i sprawdzajace czy dane haslo jest "inteligentne"

char tn[1]; //tablica przechowujaca odpowiedz TAK LUB NIE

char haslo[25]; //zmienna przechowujaca haslo
short dl;  //zmienna przetrzymuje dl hasla
int i, j, k, l; //liczniki sprawdzajace co dany uzytkownik podal

int main()
{ 
    Haslo();
    Zakanczacz();
    return 0;
}

void Zakanczacz()
{
     cout <<"\nCzy chcesz zakonczyc program? (T/N)\n";
     cin >>tn;
     
     tn[0] = toupper(tn[0]);
     
     cout <<"\n";
     
     if (tn[0] == 'T')
     {
       cout <<"No to PAPA";
       getch();
     }
     else if (tn[0] == 'N')
     {
          main();
     }
     else
     {
         Zakanczacz();
     }   
}

void Haslo()
{
     while(true)
     {
       j = 0; k = 0; l = 0; i = -1;
       
       cout <<"Podaj \"madre\" haslo ;)";
       cin >>haslo;
       
       dl = strlen(haslo);
       
       while (i < dl)
       {
           i++;
           
           if (haslo[i] >= '0' && haslo[i] <= '9')
             j++;
           if (haslo[i] >= 'a' && haslo[i] <= 'z')
             k++;
           if (haslo[i] >= 'A' && haslo[i] <= 'Z')
             l++;
           
           if (j != 0 && k != 0 && l != 0)
             break;           
       }
       
       if (j != 0 && k != 0 && l != 0)
       {
             cout <<"\nHaslo jest inteligentne!! ;) ";
             break;
       }
       if (j == 0)
         cout <<"\nNie wpisales zadnej cyfry!";
       if (k == 0)
         cout <<"\nNie wpisales zadnej malej literki!";
       if (l == 0)
         cout <<"\nNie wpisales zadnej duzej lierki!";
       
       cout <<"\n\n";
     }
}
