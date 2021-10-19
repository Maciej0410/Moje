#include <iostream>

using namespace std;

void Sort(int, int);
void PokazStan();
const int ile = 5;
int tab[ile] = { 5, 60, 10, 40, 3 };

int main()
{
    
    PokazStan();
    
    Sort(0, ile - 1); //ile = 5
    
    PokazStan();
    
    getchar();
    return 0;
}
void Sort(int lewy, int prawy) // stary lewy = 0,  stary prawy = 4 // lewy = 3, prawy = 4                            
{
     int i, j, t, piwot;
     
     i = (lewy + prawy) / 2; // i = 4, j = 3, stare j = 2;
     piwot = tab[i];         // piwot = 40
     tab[i] = tab[prawy];
     
                             // tab[0] tab[1] tab[2] tab[3] tab[4]
                             //   3      5     10     40      60
                             
     for (j = i = lewy; i < prawy; i++)
       if(tab[i] < piwot)
       {
          t = tab[i];  // t = 3
          tab[i] = tab[j]; 
          tab[j] = t;
          j++;
       }
     
     tab[prawy] = tab[j];
     tab[j] = piwot;
     
     if(lewy < j - 1)
       Sort(lewy, j - 1);
     if(j + 1 < prawy)
       Sort(j + 1, prawy);
}

void PokazStan()
{
     cout <<"Nasza tablica wyglada w kolejnosci nastepujaco: \n";
     for (int i = 0; i < ile; i++)
     {
         cout <<i+1<<". = "<<tab[i]<<"\n";
     }
}

