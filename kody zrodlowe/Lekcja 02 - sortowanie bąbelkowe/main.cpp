#include <iostream>
#include <stdio.h>
using namespace std;

void PokazStan();

const int ile = 5;
int tab[ile]; //tab[0], tab[1], tab[2], tab[3], tab[4]

int main()
{
    //WCZYTYWANIE WARTOŒÆI
    for (int i = 0; i < ile; i++)
    {
        cout <<"Podaj "<<i+1<<" liczbe: ";
        cin >>tab[i];
        cin.ignore();
    }

    //WYPISYWANIE STANU
    PokazStan();

    int temp;

    // SORTOWANIE B¥BELKOWE
    for (int i = 0; i < ile - 1; i++)
    {
      //PokazStan(); Dla prezentacji naszego sortowania :)
      for (int j = 0; j < ile - 1; j++) // np. 4 2 5 1 7 -> 2 4 5 1 7 -> 2 4 5 1 7 -> 2 4 1 5 7 -> 2 4 1 5 7 -> 2 4 1 5 7 - > 2 1 4 5 7
      {
        if (tab[j] > tab[j+1])
        {
            temp = tab[j];
            tab[j] = tab[j+1];
            tab[j+1] = temp;
        }
      }
    }

    //WYPISANIE STANU PO SORTOWANIU
    PokazStan();

    getchar();
    return 0;
}
void PokazStan()
{
     cout <<"Nasza tablica wyglada w kolejnosci nastepujaco: \n";
     for (int i = 0; i < ile; i++)
     {
         cout <<i+1<<". = "<<tab[i]<<"\n";
     }
}
