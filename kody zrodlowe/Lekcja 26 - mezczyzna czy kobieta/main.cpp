#include <iostream>
#include <string>

using namespace std;

int main()
{
    string imie;
    
    cout <<"Podaj swoje imie a ja powiem jakiej jestes plci !!\n";
    cin >>imie;
    cin.ignore();
    
    for (int i = 0; i < imie.length(); i++)
    {
        imie[i] = toupper(imie[i]);
    }
    
    if (imie[imie.length()-1] == 'A' && imie != "KUBA")
     cout <<"Jestes kobieta";
    else
     cout <<"Jestes mezczyzna";

    getchar();
    return 0;
}
