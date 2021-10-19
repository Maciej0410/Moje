// Sprawdzanie czy liczba jest liczb¹ pierwsz¹
#include <iostream>
#include <cmath>

using namespace std;
bool Test(int);

int main()
{
    int a;
    
    cout <<"Podaj liczbe ktora sprawdze czy jest liczba pierwsza: ";
    cin >>a;
    cin.ignore();
    
    if (Test(a))
      cout <<"Liczba ta jest liczba pierwsza";
    else
      cout <<"Liczba ta nie jest liczba pierwsza";
    
    
    getchar();
    return 0;
}

bool Test(int a)
{
    if (a<=1) return false;
    
    for (unsigned int i = 2; i <= sqrt(a); i++)
    {
        if (!(a % i))
          return false;
    } 
    
    return true;
}
