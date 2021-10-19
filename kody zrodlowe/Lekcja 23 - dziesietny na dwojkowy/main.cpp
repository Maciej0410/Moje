#include <iostream>
#include <string>

using namespace std;

int main()
{
    string liczba;
    int wynik = 0;
    
    cout <<"Podaj liczbe w systemie dwojkowym: ";
    cin >>liczba;
    cin.ignore();
    
    for(short i = 0; i < liczba.length(); i++)
    {
       if (liczba[i] == '1')
         wynik = wynik * 2 + 1; //1 1 1 0 wynik = 14 =  2 ^ 3 + 2 ^ 2 +  2 ^ 1 == 14
       else
         wynik = wynik * 2;
    }
    
    cout <<"\nPostac dziesietna: "<<wynik;

    getchar();
    return 0;
}

