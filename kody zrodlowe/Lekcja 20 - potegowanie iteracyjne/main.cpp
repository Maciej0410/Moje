#include <iostream>

using namespace std;

int Potega(int, int);

int a, w;

int main()
{ 
    
    cout <<"Podaj podstawe potegi: ";
    cin >>a;
    cin.ignore();
    
    cout <<"Podaj wykladnik : ";
    cin >>w;
    cin.ignore();
    
    cout <<"Wynik to: "<<Potega(a, w);

    
    getchar();
    return 0;
}

int Potega(int a, int w)
{ 
    int wynik = 1;
    
    for (int i = 0; i < w; i++)
    {
        wynik *= a;
    }
    
    return wynik;
}
   /* 
    a ^ 3 = a * a * a 
    */
