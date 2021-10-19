#include <iostream>

using namespace std;

int main()
{
    int x;
    
    cout <<"Podaj liczbe: ";
    cin >>x;
    cin.ignore();
    
    if (x < 0)
      x *= (-1);
      
    cout <<"Wartosc bezwzgledna wynosi: "<<x;

    getchar();
    return 0;
}
