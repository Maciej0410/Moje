#include <iostream>

using namespace std;

int main()
{
    int a, b;
    
    cout <<"Podaj 1 i 2 liczbe:\n";
    cin >>a>>b;
    cin.ignore();
    
    if ( a % b == 0)
      cout <<a<<" jest wielokrotnoscia liczby "<<b;
    else
      cout <<a<<" nie jest wilokrotnoscia liczby "<<b;

    getchar();
    return 0;
}   
