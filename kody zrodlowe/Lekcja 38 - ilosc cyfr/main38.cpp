#include <iostream>

using namespace std;

int main()
{
    int n, k;
    
    cout <<"Podaj liczbe calkowita: ";
    cin >>n;
    cin.ignore();
    
    for (k = 1; n /= 10; k++);
    
    cout <<"Liczba cyfr: "<<k;
    
    getchar();
    return 0;    
}
