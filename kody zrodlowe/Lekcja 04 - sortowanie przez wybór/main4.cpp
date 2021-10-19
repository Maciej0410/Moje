#include <iostream>

using namespace std;

void PokazStan();

const int ile = 4;
int tab[ile];

int main()
{
    for (int i = 0; i < ile; i++)
    {
        cout <<"Podaj "<<i+1<<" liczbe ";
        cin >>tab[i];
        cin.ignore();
    }
    
    PokazStan();
    
    int k, t;
    
    for(int i = 0; i < ile - 1; i++)
    {         
       
         k = i;                             //    5       4       60      23
         for(int j = i + 1; j < ile; j++)   // tab[0] , tab[1], tab[2], tab[3]
           if (tab[j] < tab[k])             //    4       5       60      23 - PO 1 PRZEJSCIU                                       
             k = j;
             
         t = tab[i];
         tab[i] = tab[k];
         tab[k] = t;
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
