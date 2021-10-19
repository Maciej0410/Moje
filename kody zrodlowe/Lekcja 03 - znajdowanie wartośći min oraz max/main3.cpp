#include <iostream>

using namespace std;

int main()
{
    /*I SPOSÓB
    const int ile = 5;
    int tab[ile], minx;
    
    for( int i = 0; i < ile; i++)
    {
         cout <<"Podaj liczbe "<<i+1<<": ";
         cin >>tab[i];
         cin.ignore();
         if (i == 0)
          minx = tab[i];
         else if (tab[i] < minx)   //4 -4 20 40 -> minx = -4 Aby znalesc max wart. else if (tab[i] > minx)
          minx = tab[i];
    }
    
    cout <<"Minimalna liczba z podanych to: "<<minx;
    */
    
    const int ile = 5;
    int tab[ile], k = 0;
    
    for (int i = 0; i < ile; i++)
    {
        cout <<"Podaj "<<i+1<< " element: ";
        cin >>tab[i];
        cin.ignore();
    }
    
    for (int i = 1; i < ile; i++)
     if (tab[i] > tab[k]) //4 -4 20 40 -> k = 1  // Aby znalesc max wart. if (tab[i] > tab[k])
       k = i;
       
    cout <<"\nMaksymalna liczba to: "<<tab[k];
    cout <<"\nTablica ta posiada indeks: "<<k;
    cout <<"\nZostala ona wpisana jako: "<<k+1;
        
    
    getchar();
    return 0;
}
