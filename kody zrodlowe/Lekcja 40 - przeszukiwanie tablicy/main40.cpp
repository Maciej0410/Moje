#include <iostream>

using namespace std;

int main()
{
    int k = -1, a, tab[5] = { 4, 30, 23, 43, 3};
    
    cout <<"Podaj wartosc a ja sprawdze czy takowa istnieje w tablicy tab:\n";
    cin >>a;
    cin.ignore();
    
    for (int i = 0; i < 5; i++)
    {
        if (a == tab[i])
           k = i;
    }
    
    if (k != -1)
      cout <<"Wartosc a: "<<a<<" istnie w tab["<<k<<"] i jest rowna: "<<tab[k];
    else
      cout <<"Taki element nie istnieje!";

    getchar();
    return 0;
}
