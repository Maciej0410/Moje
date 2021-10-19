/* Sortowanie przez wstawienie */
#include <iostream>

using namespace std;

void PokazStan();
const int ile = 5;
int tab[ile];

int main()
{
    for (int i = 0; i < ile; i++)
    {
        cout <<"Podaj "<<i+1<<" liczbe: ";
        cin >>tab[i];
        cin.ignore();
    }
    
    PokazStan();
    
    int x, i, j;
    
    for (j = ile - 2; j >= 0; j--) //j = 2
    {
        x = tab[j]; //x = 8
        i = j + 1;  //i = 5
        while ((i < ile) && (x > tab[i])) // tab[0] tab[1] tab[2] tab[3] tab[4]
        {                                 //   2       3     4      5      8
           tab[i-1] = tab[i];
           i++;    
        }
        tab[i-1] = x;
    }
    
    
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
