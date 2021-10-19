#include <iostream>

using namespace std;

int Potega(int);

int a, w;

int main()
{ 
    
    cout <<"Podaj podstawe potegi: ";
    cin >>a;
    cin.ignore();
    
    cout <<"Podaj wykladnik : ";
    cin >>w;
    cin.ignore();
    
    cout <<"Wynik to: "<<Potega(w);

    
    getchar();
    return 0;
}

int Potega(int n)
{ 
    if (n == 0)
      return 1;
    else
      return a * Potega(n-1);
}
   /* 
    a ^ 3 = a * a * a 
    
    a ^ 0 = 1
    a ^ 1 = a
    a ^ 2 = a * a
    a ^ 3 = a * a * a
    
    a ^ n = a * a * ... a(n-1)
    
    
    */
