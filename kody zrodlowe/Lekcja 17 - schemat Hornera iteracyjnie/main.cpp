#include <iostream>

using namespace std;

/*
  5 * x^4 + 2 * x^3 + x^2 + 10 * x + 4
 
 (5 * x^3 + 2 * x^2 + x) + 10 ) * x + 4
 
 ((5 * x^2 + 2 * x + 1) * x + 10 ) * x + 4
 
 (((5 * x + 2) * x + 1) * x + 10 ) * x + 4
 
  // 4 mno¿enia 4 dodawania
 
 a normalnie??
 
 (5 * x * x * x * x) + (2 * x * x * x) + (1 * x * x) + 10 * x + 4 
 
  // 10 mno¿eñ 4 dodawania

*/

int main()
{
    int n;
    
    cout <<"Podaj stopien wielomianiu: ";
    cin >>n;
    cin.ignore();
    
    int *a = new int[n];
    
    cout <<"Podaj wartosci a: \n";
    for (int i = 0; i <= n; i++)
    {
        cout <<"a["<<i<<"] = ";
        cin >>a[i];
        cin.ignore();
    }
    
    int x;
    
    cout <<"Podaj x: ";
    cin >>x;
    cin.ignore();
    
    int w;
    
    w = a[0];
    
    for (int i = 1; i <= n; i++) //w = 124, x = 2
    {
        w = w * x + a[i];      //(((5 * x + 2) * x + 1) * x + 10 ) * x + 4
    }
    
    cout <<"Wynik to: "<<w;
   
    delete [] a;
    getchar();
    return 0;
}

