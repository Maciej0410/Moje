#include <iostream>

using namespace std;

int main()
{
    int suma = 0, n;
    
    cout <<"Podawaj liczby ktore mam dodac (0 - koniec):\n";
   
    do
    {
       cin >>n;
       cin.ignore();
       
       suma += n; // suma = suma + n;
    
    }while(n != 0);
    
    
    cout <<"Wynik to: "<<suma;
    
    
    getchar();
    return 0;
}
