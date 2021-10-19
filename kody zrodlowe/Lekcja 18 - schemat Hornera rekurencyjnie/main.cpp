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
int Horner(int);

int n;
int *a = new int[n];
int x;

int main()
{
    
    cout <<"Podaj stopien wielomianiu: ";
    cin >>n;
    cin.ignore();
    
    
    cout <<"Podaj wartosci a: \n";
    for (int i = 0; i <= n; i++)
    {
        cout <<"a["<<i<<"] = ";
        cin >>a[i];
        cin.ignore();
    }
    
    
    cout <<"Podaj x: ";
    cin >>x; //x = 2
    cin.ignore();
    
    cout <<"Wynik to: "<<Horner(n);
    
    getchar();
    return 0;
}

int Horner(int i) //i = 2
{
    if (i == 0)
      return a[0]; // w = 124
    else
      return Horner(i-1) * x + a[i]; // (((5 * x + 2) * x + 1) * x + 10 ) * x + 4

}
    /*
      w[0] = a[0];
      w[1] = a[0] * x + a[1];
      w[2] = a[1] * x + a[2];
      
      w[n] = a[n-1] * x + a[n]; - wzór rekurencyjny
    */
